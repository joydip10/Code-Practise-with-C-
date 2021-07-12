#include <iostream>

using namespace std;

template <typename T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    double a=9.2,b=10.9;
    cout<<"a= "<<a<<"b= "<<b<<endl;
    cout<<"a+b= "<<add(a,b)<<endl;
}
