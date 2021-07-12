#include <iostream>

using namespace std;

class box
{
public:
    int height;
    int width;
public:
    void setvalue(int a,int b){height=a;width=b;}
    int area(void) {return height*width;}
};

box scan()
{
    int h,w;
    cin>>h>>w;
    box ob;
    ob.setvalue(h,w);
    return ob;
}
box print(box a)
{
    cout<<a.area()<<endl;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    box toy;

    toy=scan();
    print(toy);
    }
    return 0;
}

