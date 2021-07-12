#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
int lcm(int a,int b)
{
    return((a*b)/gcd(a,b));
}

int main()
{
        cout<<"LCM OF 15 & 20 = "<<lcm(15,20)<<endl;
        cout<<"GCD OF 3 & 6 = "<<gcd(3,6)<<endl;
}
