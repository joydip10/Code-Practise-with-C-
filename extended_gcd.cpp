#include<iostream>

using namespace std;

int gcd_extended(int a,int b,int *x,int *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int gcd=gcd_extended(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return gcd;
}

int main()
{
    int a=338;
    int b=468;
    int x,y;
    cout<<"GCD OF a & b = "<<gcd_extended(a,b,&x,&y)<<endl;
    return 0;
}
