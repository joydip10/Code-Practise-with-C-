#include<stdio.h>

int main()
{
     int digit,rev=0,n,i,t;
     scanf("%d",&n);
     int p = n;
     while(p!=0)
     {
        digit=p%10;
        rev=(rev*10)+digit;
        p=p/10;
     }

    printf("%d",rev);
    return 0;
}
