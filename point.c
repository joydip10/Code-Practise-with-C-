#include<stdio.h>

int main()
{
    int a=2;




    int *p=&a;
    printf("%d\n",*p);
    printf("%d\n",p);

    *p=8;


    printf("%d",a);

    int **f;
    **f=&(*p);

    **f=5;

    printf("%d",a);
}
