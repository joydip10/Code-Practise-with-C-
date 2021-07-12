#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;

class Stack
{
    int a[MAXSIZE],top;
public:
    Stack()
    {
        top=-1;
    }
    void Push(int x);
    void Pop();
    bool isempty();
    void istop();
    void islast();
};
void Stack::Push(int x)
{
    if(top>=MAXSIZE)
    {
        cout<<"Stack overflow !!!"<<endl;
    }
    else
    {
        a[++top]=x;
    }
}
void Stack::Pop()
{
    if(top<0)
    {
        cout<<"Stack underflow !!!"<<endl;
    }
    else
    {
        cout<<"POPED VALUE : "<<a[top--]<<endl;
    }
}
bool Stack::isempty()
{
    if(top<0)
    {
        return true;
    }
    else
        return false;
}
void Stack::istop()
{
    if(top>=0)
    {
        cout<<"AT THE LAST : "<<a[top]<<endl;
    }
}
void Stack::islast()
{
    if(top>=0)
    {
        cout<<"AT THE FIRST : "<<a[0]<<endl;
    }
}

int main()
{
    Stack firststack;
    firststack.Push(2);
    firststack.Push(3);
    firststack.Push(4);
    firststack.Pop();
    firststack.istop();
    firststack.Pop();
    firststack.Pop();
    firststack.Pop();
    cout<<firststack.isempty()<<endl;
}
