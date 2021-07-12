#include<iostream>


using namespace std;

class A
{
public:
   int a;

};
class B:public A
{
public:
    int a;

};

int main()
{
    B x;
    x.A::a=1;
    cout<<x.A::a<<endl;
}
