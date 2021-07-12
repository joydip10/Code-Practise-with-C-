#include<iostream>

using namespace std;

int main()
{
    int a,n,chk;
    int ara[100],arr[100];

    cin>>a;

    int i,p=0;

    for(i=0;;i++)
    {
        ara[i]=a%10;
        a=a/10;
        p++;
        if(a==0)
        {
            break;
        }
    }
    for(i=0,n=p-1;i<p,n>=0;i++,n--)
    {
        arr[i]=ara[n];
    }

    for(i=0;i<p;i++)
    {
        if(ara[i]==arr[i])
        {
            chk=0;
        }
        else
        {
            chk=1;
            break;
        }
    }
    if(chk==0)
    {
        cout<<"Pallindrome\n";
    }
    else
        cout<<"NOT PALLINDROME \n";

    return 1;
}
