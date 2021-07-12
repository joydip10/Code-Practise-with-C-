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
    node* Insert(int value);
    node* Delete(node *root,int value);
    int Search(node *r,int value);
    void inOrder(node* temp);
};
node* findMin(node *root)
{
node *temp=new node;
    temp=root;
while (temp->left!=NULL)
    temp=temp->left;
return temp;
}
node* Insert(int value)
{
    node *newNode=new node;
    node *parent=new node;
    node *current=new node;

    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    if(root==NULL)
        root=newNode;
    else{
        current=root;
        parent=NULL;
    while(current!=NULL)
    {
        parent=current;
        if(value< (parent->data))
          current=current->left;
    else if(value>parent->data)
        current=current->right;
    }
    if(value<parent->data)
        parent->left=newNode;
    else if(value>parent->data)
        parent->right=newNode;

}
}
int BST::Search(node *r, int value)
{
    if(r==NULL||r->data==value)
        return r->data;
    if(value>r->data)
        return Search(r->right,value);
    return Search(r->left,value);
}
node *Delete(node *root,int value)
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
   node *mybst=new node;
    mybst=Insert(4);
    mybst=Insert(5);
    mybst=Insert(2);
    mybst=Insert(10); mybst->Insert(-9); mybst->Insert(19); mybst->Insert(0); mybst->Insert(-12);
      cout<< mybst->Search(mybst->Root(),10);
      mybst->inOrder(mybst->Root());
      mybst->Delete(mybst->Root(),10);
      mybst->inOrder(mybst->Root());
}

