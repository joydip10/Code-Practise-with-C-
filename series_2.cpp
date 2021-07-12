#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0,q;
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(i,i);
    }
    cout<<sum;
    return 0;
}
