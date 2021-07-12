#include<iostream>

using namespace std;

template<class T>
class A
{
public:
    T a,b;
    A(T a,T b)
    {
        this->a=a;
        this->b=b;
    }
    T bigger();
};
template <class T>
T A<T>::bigger()
{
    return(a>b?a:b);
}
int main()
{
    A<int>Joo(1,2);
    cout<<J oo.bigger()<<endl;
    return 0;
}
