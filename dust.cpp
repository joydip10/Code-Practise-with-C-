#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,a[10],b[10],c,d,sum;
    scanf("%d",&t);
    printf("\n");
    while(t--)
    {
        sum=0;
        scanf("%d",&c);
        for(int i=0;i<c;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];

        }
        printf("%d\n",sum);

    }
}
