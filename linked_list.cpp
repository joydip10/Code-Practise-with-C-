#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class List
{
private:
    node *head, *tail;
    int count;
public:
    List()
    {
        head=tail=NULL;
        count=0;
    }
    //~List();
    void createNode(int value);
    void insertFirst(int value);
    void insertPosition(int pos, int value);
    void deleteFirst();
    void deleteLast();
    void deletePosition(int pos);
    bool isempty();
    int length();
    void display();
    void show(int value);
    void Swap(int x,int y);
    int Check(int x);
};
bool List::isempty()
{
    if(head==NULL)
        return true;
}
void List::createNode(int value)
{
   node *newNode=new node();
   newNode->data=value;
   newNode->next=NULL;
   if(head==NULL)
   {
       head=newNode;
       tail=newNode;
       newNode->next=NULL;
   }
   else
    {
    tail->next=newNode;
    tail=newNode;
   }
   count++;
}
void List::insertFirst(int value)
{

   node *newNode=new node;
   newNode->data=value;
   newNode->next=head;
   head=newNode;
   count++;
}
void List::insertPosition(int pos, int value)
{
    node *newNode=new node;
    node *prev=new node;
    node *cur=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
        prev=cur;
        cur=cur->next;
    }

   newNode->data=value;
   prev->next=newNode;
   newNode->next=cur;
   count++;

}
void List::display()
{
    node *temp=new node;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<< "\n";
        temp=temp->next;
    }
}
void List::deleteFirst()
{
    node *temp=new node;
    temp=head;
    head=head->next;
    delete temp;
    count--;
}
void List::deleteLast()
{
    deletePosition(count);
}
void List::deletePosition(int pos)
{
    node *cur=new node;
    node *prev=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
        prev=cur;
        cur=cur->next;
    }
    prev->next=cur->next;
    delete cur;
    count--;

}
int List::length()
{
    return count;
}
void List::show(int value)
{
    node *temp=new node;
    temp=head;
    int c=0;
    cout<<"head node's address="<<temp<<endl;
    while(temp!=NULL)
    {
        c++;
        if(temp->data==value)
        {
        cout<<temp->data<<endl;
        cout<<temp->next<<endl;
        break;
        }
        temp=temp->next;
    }
    cout<<c<<endl;
}
int List::Check(int x)
{
    node* temp=new node;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
           return 1;
           break;
        }
        temp=temp->next;
    }
}
void List::Swap(int x,int y)
{
    node *temp=new node;

    if(Check(x)==1 && Check(y)==1)
    {
        temp=head;
        while(temp!=head)
        {
            if(temp->data == y)
            {
                temp->data=x;
            }
            else if(temp->data == x)
            {
                temp->data=y;
            }
        }
    }
}
int main()
{
    List my;
    my.insertFirst(2);
    my.insertFirst(3);
    my.insertFirst(4);
    my.insertFirst(5);
    my.insertFirst(6);

    my.display();

    my.show(4);

    my.Swap(3,5);

    my.display();
    return 0;
}
