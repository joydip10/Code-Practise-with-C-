#include<iostream>

using namespace std;

class A
{
public:
    int a;
    int b;
    void getvalue(int a,int b);
    void printvalue()
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
};
void A::getvalue(int a,int b)
{
    this->a=a;
    this->b=b;
}
int main()
{
    A a;
    A b;
    b=a;
    a.getvalue(5,6);
    a.printvalue();
    b.printvalue();
    return 0;
}
