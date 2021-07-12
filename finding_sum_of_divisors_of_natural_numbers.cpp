#include<iostream>
#include<math.h>

int result=0;
using namespace std;

void div_nat_sum(int n)
{
    for(int i=1;i<sqrt(n)+1;i++)
    {
        if(n%i==0)
        {
            if(n/i==i) result += i;
            else result += (i + n/i);
        }
    }
    cout<<result<<endl;
}

int main()
{
    int a=100;
    div_nat_sum(a);
    return 0;
}
