#include <iostream>

using namespace std;

int& findlarge(int ara[],int n)
 {
     int i,value=0;
     for(i=0;i<n;i++)
     {
         if(ara[i]>value)
         {
             value=ara[i];
         }
     }
     return value;
 }
 int main()
 {
     int ara[5]={1,2,3,4,5};
     findlarge(ara,5);
     cout<<"LARGEST VALUE OF THE ARRAY IS: "<<findlarge(ara,5)<<endl;
 }
