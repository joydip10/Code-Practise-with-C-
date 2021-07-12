#include <iostream>

using namespace std;

class box
{
public:
    box(){cout<<"NOTHING GIVEN"<<endl;}
    box(int a){cout<<"length="<<a<<endl;}

};

int main()
{
    box A(5);
    box B;


}
