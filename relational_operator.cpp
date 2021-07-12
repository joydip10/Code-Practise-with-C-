#include<iostream>

using namespace std;

class box
{
    int x,y;

public:
    void set(int a,int b)
    {
        x=a;
        y=b;
    }
bool operator > (box ob)
{
    return ((x+y)>(ob.x+ob.y));

}
};

int main()
{
    box b,c;

    b.set(8,2);
    c.set(9,6);

    if(b>c) cout<<"b"<<endl;
    else cout<<"c"<<endl;
}
