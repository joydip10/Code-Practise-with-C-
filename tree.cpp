#include<iostream>
using namespace std;
struct node{
int data;
node *right,*left;
};
class BST
{
private:
    node *root;
public:
    BST(){root=NULL;};
    node *Root(){return root;};
    node* Insert(node* root, int value);
    node* Delete(node *root,int value);
    node* findMin(node *root);
    int Search(node *r,int value);
    void inOrder(node* temp);
};
node* BST::findMin(node *root)
{
node *temp=new node;
    temp=root;
while (temp->left!=NULL)
    temp=temp->left;
return temp;
}
node *BST::Insert(node *root, int value)
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
    }
    else if(value>=root->data)
    {
        root->right=Insert(root->right,value);
    }
    return root;
}
int BST::Search(node *r, int value)
{
    if(r==NULL||r->data==value)
        return r->data;
    if(value>r->data)
        return Search(r->right,value);
    return Search(r->left,value);
}
node* BST::Delete(node *root,int value)
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
   return root;
}
void BST::inOrder(node* temp)
{
    if(temp==NULL)
        return;


    inOrder(temp->left);
    cout<<temp->data<<endl;
    inOrder(temp->right);

}
int main()
{
    BST mybst;
   node *root=NULL;
   int n, a;
   cin>>n;
   while (n--)
   {
       cin>>a;
       root=mybst.Insert(root,a);
   }
      mybst.inOrder(root);
     if(mybst.Search(root,10))
        cout<<"yes";
     mybst.Delete(root,4);
     mybst.inOrder(root);
}
