#include <iostream>

using namespace std;

class box
{
    static int a;
    static int b;
    int c;
public:
    func()
    {
        cout<<" a="<<++a<<" b="<<++b<<" c="<<++c<<endl;
    }
    box(){c=0;}
};
int box::a;
int box::b;

int main()
{
    box obj,obj1;
    obj.func();
    obj.func();
    obj1.func();
    return 0;
}
