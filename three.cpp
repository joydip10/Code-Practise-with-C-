#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    int test;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
        {
            if(a>c)
            {
               swap(a,c);
            }
            else
            {
                swap(a,b);
            }
        }
        else if(b>c)
        {
            if(b<a)
            {
                swap(b,a);
            }
            else
            {
                swap(b,c);
            }
        }
        else if(a>c)
        {
            if(a<b)
            {
                swap(a,b);
            }
            else
            {
                swap(b,c);
            }
        }

        printf("%d %d %d",a,b,c);
    }
    return 0;
}
