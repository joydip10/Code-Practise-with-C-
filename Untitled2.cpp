#include<bits/stdc++.h>
using namespace std;
int bigmod(int a,int b,int c)
{
    if(b==0)
        return 1%c;
    if(b%2==0)
    {
        int x=bigmod(a,b/2,c);
        return (x*x)%c;
    }
    else if(b%2==1)
    {
        int v,y;
        v=a%c;
        y=bigmod(a,b-1,c);
        return (v*y)%c;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ret;
    ret=bigmod(a,b,c);
    printf("%d",ret);
    return 0;
}
