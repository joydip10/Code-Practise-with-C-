#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

/* newNode() allocates a new node with the given data and NULL left and
   right pointers. */
struct node* newNode(int data)
{
  // Allocate memory for new node
  node* nn=new node;

  // Assign data to this node
  nn->data = data;

  // Initialize left and right children as NULL
  nn->left = NULL;
  nn->right = NULL;
  return(nn);
}


int main()
{

  struct node *root = newNode(1);


  root->left        = newNode(2);
  root->right       = newNode(3);

  root->left->left  = newNode(4);

  getchar();
  return 0;
}
