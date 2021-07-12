#include <iostream>
using namespace std;
template <class T,class S>
class abc
{
    T length;
    S breadth;
public:
    T getlen(T x);
    S getbre(S a)
    {
        return breadth=a;
    }
    void showbre(void){cout<<"BREADTH = "<<breadth<<endl;}
};
template <class T,class S>
T abc<T,S>::getlen(T x)
{
    return length=x;
}

int main()
{
    abc<int,double> obj;
    cout<<"LENGTH = "<<obj.getlen(2)<<endl;
    obj.getbre(2.3);
    obj.showbre();
}
