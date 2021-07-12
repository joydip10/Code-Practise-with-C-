#include <iostream>

using namespace std;

class box
{
    int a;

public:
    int ret(int x)const{x=a;return x;} //DOESNT CHANGE ANYTHING HERE
};

int main()
{
    int i=5;

    const int& r=i;
    i=7;
    cout<<r<<endl;//we can't change the value of constant reference by using r=something.We have to change the value of variable it is referring to.
    return 0;
}
