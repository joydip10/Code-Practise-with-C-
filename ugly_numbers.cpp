#include<iostream>
#include<stdio.h>
using namespace std;
int maxd(int a, int b)
{
  while (a%b == 0)
   a = a/b;
  return a;
}

int ugly_check(int n)
{
  n = maxd(n, 2);
  n = maxd(n, 3);
  n = maxd(n, 5);

  return (n == 1)? 1 : 0;
}
int main()
{
    int num;
    cin>>num;
    if(ugly_check(num)==1) cout<<"Its an ugly number\n";
    return 0;
}
