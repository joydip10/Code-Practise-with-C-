#include <iostream>

using namespace std;

class Add
{
public:
    int a;
    int b;
public:
    int sum(int x,int y);
};

int Add::sum(int x,int y)
{
    return x+y;
}

int main()
{
    Add obj;
    obj.a=5;
    obj.b=5;
    cout<<"ADD: "<<obj.sum(obj.a,obj.b);
}
