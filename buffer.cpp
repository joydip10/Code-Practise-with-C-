#include<stdio.h>
//#include<stdlib>
#include<iostream>
using namespace std;
int main()
{
    string c;
    getline(cin,c);
    cout<<c;
}
int num,test;
   cin>>test;
   cin.sync();
   for(int k=1;k<=test;k++){
       cin>>num;
       cin.sync();
       int p=num;
   for(int i=num+1;;i++)
   {
       if(binary(p)==binary(i))
       {
           cout<<"Case "<<k<<": "<<i<<endl;
           break;
       }
   }
   }
   return 0;
