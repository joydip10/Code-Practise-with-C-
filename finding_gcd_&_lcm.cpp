#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(a==b)
        return a;
    else if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<"GCD : "<<gcd(num1,num2)<<'\t'<<"LCM : "<<lcm(num1,num2)<<endl;
    return 0;
}
