#include<iostream>


using namespace std;

class box
{
public:
    box(){cout<<"Constructor..Base"<<endl;}
};

class A:public box
{
public:
    A(){cout<<"Constructor..A"<<endl;}
};

class B:public A
{
public:
    B(){cout<<"Constructor..B"<<endl;}
};

class C:public B
{
public:
    C(){cout<<"Constructor..C"<<endl;}
};

int main()
{
    C a;
}
