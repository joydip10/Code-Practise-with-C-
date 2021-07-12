#include<iostream>

using namespace std;

struct Node{
    char data;
    struct Node *left;
    struct Node *right;
};
void Preorder(Node *root){
    if(root==Null)return;
    cout<<root->data<<endl;
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(Node *root){
    if(root==Null)return;
    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
}
void Postorder(Node *root){
    if(root==Null)return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<endl;
}
Node* Insert(Node *root,char data)
{
    if(root==Null){
        root=new Node();
        root->data=data;
        root->left=root->right=Null;
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
}
int main()
{
    Node *root= Null;
    root =
}
