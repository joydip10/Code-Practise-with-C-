#include<iostream>

using namespace std;

struct node
{
    int data;
    node* right;
    node* left;
};

node* GetNewNode(int data)
{
    node* newnode = new node();
    newnode.data=data;
    newnode.right=newnode.left=null;
    return newnode;
}
node* Insert(node* root,int data)
{
    if(root==null)
    {
        GetNewNode(data);
    }
    else if(data>=root.data)
    {
        Insert(root.left,data);
    }
    else if(data<=root.data)
    {
        Insert(root.right,data);
    }
    return root;
}
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main()
{
    BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);
	root = Insert(root,10);
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	// Ask user to enter a number.
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
}
