#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main()
{
    int arr[4]={12, 6};
   //sort(arr,arr+2);
    int ans=arr[0];
    for(int i=1;i<2;i++)
    {
        ans=gcd(ans,arr[i]);
    }
    cout<<ans<<endl;
}
