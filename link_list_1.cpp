#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct node
{
    int a;
    node* next;
};
struct node* head;
void Insert(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->a=x;
    temp->next=head;
    head=temp;
}
void print()
{
    struct node* temp=head;
    printf("The data entered is : ");
    while(temp != NULL);
    {
        printf("%d",temp->a);
        temp= temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
    int n;
    printf("How many elements you want to insert : \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int p;
        printf("Enter the element : ");
        scanf("%d",&p);
        Insert(p);
        print();
    }

}
