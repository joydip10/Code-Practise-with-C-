#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int data;
    node *right;
    node *left;
};
class avlTree
{
private:
    node *root;
public:
    int height(node*);
    int diff(node*);
    node *left_rotation(node*);
    node* right_rotation(node*);
    node*lr_rotation(node*);
    node*rl_rotation(node*);
    node*balance(node*);
    node *Insert(node*, int);
    bool Search(node*,int);
    node* Delete(node*,int);
    node* findMin(node *root);
    void inorder(node*);
    avlTree()
    {
        root=NULL;
    }

};
//height
int avlTree::height(node *temp)
{
    int h=0;
    if(temp!=NULL)
    {
        int l_height=height(temp->left);
        int r_height=height(temp->right);
        h=max(l_height,r_height);
    }
    return h;
}
//height difference
int avlTree::diff(node*temp)
{
    int l_height=height(temp->left);
    int r_height=height(temp->right);
    int b_factor=l_height-r_height;
    return b_factor;
}
//Right-Right case
node *avlTree::left_rotation(node *root)
{
    node* temp=new node;
    temp=root->right;
    root->right=temp->left;
    temp->left=root;
    return temp;
}
//Left-Left case
node *avlTree::right_rotation(node *root)
{
    node *temp=new node;
    temp=root->left;
    root->left=temp->right;
    temp->right=root;
    return temp;
}
//Left-Right case
node *avlTree::lr_rotation(node* root)
{
    node* temp=new node;
    temp=root->left;
    root->left=left_rotation(temp);
    return right_rotation(root);
}

//Right-Left case
node *avlTree::rl_rotation(node* root)
{
    node* temp=new node;
    temp=root->right;
    root->right=right_rotation(temp);
    return left_rotation(root);
}
//Balance
node *avlTree::balance(node* temp)
{
    int bal_factor=diff(temp);
    if(bal_factor>1)
    {
        if(diff(temp->left)>0)
            temp=right_rotation(temp);
        else
            temp=lr_rotation(temp);
    }
    else if(bal_factor<-1)
    {
        if(diff(temp->right)>0)
            temp=rl_rotation(temp);
        else
            temp=left_rotation(temp);
    }
    return temp;
}
node *avlTree::Insert(node *root, int value)
{
    if(root==NULL)
    {
        root=new node;
        root->data=value;
        root->left=NULL;
        root->right=NULL;
        return root;

    }
    else if (value<root->data)
    {
        root->left=Insert(root->left,value);
        root=balance(root);
    }
    else if(value>=root->data)
    {
        root->right=Insert(root->right,value);
        root=balance(root);
    }
    return root;
}
//Finding minimum
node* avlTree:: findMin(node *root)
{
node *temp=new node;
    temp=root;
while (temp->left!=NULL)
    temp=temp->left;
return temp;
}
//Delete
node *avlTree::Delete(node *root,int value)
{
   if(root==NULL)
        return root;
   else if (value<root->data)
    root->left=Delete(root->left, value);
   else if(value>root->data)
    root->right=Delete(root->right,value);
   else{
    //case1:No child
    if(root->left==NULL && root->right==NULL)
    {
                delete root;
                root=NULL;
    }
    //case1:node has one child
    else if (root->left==NULL)
    {
        node* temp=new node;
        temp=root;
        root=root->right;
        delete temp;
    }
    else if(root->right==NULL)
    {
        node *temp=new node;
        temp=root;
        root=root->left;
        delete temp;
    }
    //case3:node has 2 children
    else{
        node *temp=new node;
        temp=findMin(root->right);
        root->data=temp->data;
        root->right=Delete(root->right, temp->data);
    }

   }
   if(root==NULL)
   return root;
   root=balance(root);
   return root;
}
//In order Traversal
void avlTree::inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
int main()
{
    avlTree avl;
    node* rot=NULL;
    int i=15;
    int x;
    while(i--)
    {
        cin>>x;
     rot=avl.Insert(rot, x);
    }

    rot=avl.Delete(rot, 45);
    rot=avl.Delete(rot, 41);
    rot=avl.Delete(rot, 46);
    rot=avl.Delete(rot, 35);
    rot=avl.Delete(rot, 33);
    rot=avl.Delete(rot, 36);

    avl.inorder(rot);
}



