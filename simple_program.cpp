#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"ENTER A NUMBER : ";
    cin >> a ;
    cout<<"ENTER ANOTHER NUMBER : ";
    cin >> b ;

    int s=a+b;
    int sub=a-b;
    int m=a*b;
    float d=a/b;

    cout<<"ADDITION OF NUMBERS : "<<s<<"\n";
    cout<<"SUBSTRACTION OF NUMBERS : "<<sub<<"\n";
    cout<<"DIVISION OF NUMBERS : "<<d<<"\n";
    cout<<"MULTIPLICATION OF NUMBERS : "<<m<<"\n";

    return 0;


}
