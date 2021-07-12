#include <iostream>

using namespace std;

template <class T>
void change(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
main()
{
    int i=20,j=10;
    change(i,j);
    cout<<i<<" "<<j<<endl;
}
