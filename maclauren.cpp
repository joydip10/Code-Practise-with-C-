#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    double power;
    cin>>power;
    int accuracy;
    cin>>accuracy;
    double ans=1.00,temp=1.00;
    int i;
    for(i=1;i<=accuracy;i++){
        temp=(temp*power)/i;
        ans=ans+temp;
    }
    cout<<ans<<" "<<endl;
     return 0;
}

