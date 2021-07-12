#include<iostream>

using namespace std;

class A
{
public:
     virtual void showmessage()
    {
        cout<<"Base class"<<endl;
    }
};

class B:public A
{
    void showmessage()
    {
        cout<<"Derived class"<<endl;
    }
    void showup()
    {
        cout<<"DERIVED CLASS"<<endl;
    }
};

int main()
{
    A *ptr=new A;
    B b;
    ptr=&b;

    ptr->showmessage();

}
