#include <iostream>
using namespace std;
int main()
{
    double a[10],b[10],value,h,f,l,sum=0.0;
    int i,m;
    cout<<"Input total number of data points : "<<endl;
    cin>>m;
    cout<<"Input table values,as x and f(x) : "<<endl;
    for(i=0;i<m;i++)
    cin>>a[i]>>b[i];
    cout<<"Initial limit of x : "<<endl;
    cin>>f;
    cout<<"Final limit of x : "<<endl;
    cin>>l;
    h=a[1]-a[0];
    for(i=1;i<m-1;i++)
    sum=sum+b[i];
    value=(h/2)*(b[0]+2*sum+b[m-1]);
    cout<<"Integral from "<<f<<" to "<<l<<" is : "<<value<<endl;
    return 0;

}
