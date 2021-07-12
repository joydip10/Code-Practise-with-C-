#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,sizeof(str));
    cout<<str<<endl;
    cout<<strlen(str)<<endl;


    cout<<12.345<<endl;
    cout.setf(ios::showpoint);
    cout<<12.345<<endl;
    cout.setf(ios::uppercase);
    cout<<"HARRY POTTER"<<endl;

    return 0;
}
