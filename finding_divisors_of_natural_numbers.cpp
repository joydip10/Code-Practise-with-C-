#include<iostream>
#include<math.h>
using namespace std;
void div_nat(int n)
{
    for(int i=1;i<sqrt(n)+1;i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                cout<<i<<endl;
            else
                cout<<i<<'\t'<<n/i<<endl;
        }
    }
}

int main()
{
    int a;
    a=100;
    div_nat(a);
    return 0;
}
