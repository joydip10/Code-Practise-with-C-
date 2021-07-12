#include <iostream>

using namespace std;


    int ret(int a,int b)
    {
        return a+b;
    }
    int ret(int a)
    {
        return a;
    }


int main()
{

    int (*p)(int,int);
    p=ret;
    cout<<p<<endl;
    cout<<p(5,5)<<endl;

    int (*ptr)(int);
    ptr=ret;
    cout<<ptr<<endl;
    cout<<ptr(5)<<endl;


}
