#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return((a*b)/gcd(a,b));
}
int main()
{
    int arr[5]={2,7,3,9,4};
    int ans=arr[0];
    for(int i=1;i<5;i++)
    {
        ans=(ans*arr[i])/gcd(ans,arr[i]);
    }
    cout<<"LCM OF ARRAY = "<<ans<<endl;
    return 0;
}
