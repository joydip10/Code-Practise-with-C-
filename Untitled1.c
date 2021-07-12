#include<stdio.h>
#include<math.h>
int phi(int n)
{
    int i;
    int ret = n;
    for(i =2;i*i<=n;i++ )
    {
        if(n%i==0)
        {
            while(n%i == 0)
            {
                n/=i;
            }
            ret -=ret/i;
        }

    }
    if(n>1)
        {
            ret-=ret/n;
        }
        return ret;
}
int main()
{
    int k;
    scanf("%d",&k);
    int result;
    result=phi(k);
    printf("%d",result);
}
