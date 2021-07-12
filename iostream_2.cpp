#include<stdio.h>
//#include<ios>
#include<iostream>
using namespace std;
int main()
{
   int i=100;
   cout.setf(ios::showbase);
   cout.unsetf(ios::basefield);
   cout.setf(ios::hex);
   cout.setf(ios::showpos);
   cout<<i<<endl;
   cout.unsetf(ios::hex);
   cout.setf(ios::showpos);
   cout<<i<<endl;

   ios::fmtflags flag;
   cout.flags(flag);
   if(flag & ios::showbase)
   {
       cout<<"Showbase\n";
   }
   if(flag & ios::showpos)
   {
       cout<<"showpos\n";
   }
}
