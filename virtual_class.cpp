#include<iostream>

using namespace std;

class A
{
public:
    int a;
};
class B
{
public:
    int a;
};
class C:public virtual A,public B
{
public:
    int b;
};
int main()
{
    A x;
    x.a=5;

}
