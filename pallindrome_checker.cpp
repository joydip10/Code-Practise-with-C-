#include<iostream>

using namespace std;

void pallindrome(int n)
{
    int digit,rev=0,num,i,t;
        int p = n;
        while(p!=0)
        {
            digit=p%10;
            rev=(rev*10)+digit;
            p=p/10;
        }
        if(p==rev)
        {
         cout<<p;
        }
        else
        {
         cout<<"pai nai"<<endl;
        }
}
int main()
{
    int a=99;
    pallindrome(a);
}
