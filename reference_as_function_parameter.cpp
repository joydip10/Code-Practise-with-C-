#include <iostream>

using namespace std;

int value(int &a)
{
    return a;
}

int main()
{
    int a;
    cout<<"ENTER A VALUE:";
    cin>>a;
    value(a);
    cout<<"THE VALUE IS : "<<value(a)<<endl;
}
