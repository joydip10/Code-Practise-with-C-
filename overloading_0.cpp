#include <iostream>

using namespace std;

class box
{
private:
    int height;
    int breadth;
public:
    void setheight(int a){height=a;}
    void setbreadth(int a){breadth=a;}
    void getarea(){cout<<height*breadth<<endl;}

box operator+( box b)
{
    box Box;
    Box.height=this->height+b.height;
    Box.breadth=this->breadth+b.breadth;
    return Box;
}
};
int main()
{
    box A;
    box B;
    box C;

    A.setheight(5);
    A.setbreadth(5);
    A.getarea();

    B.setheight(5);
    B.setbreadth(5);
    B.getarea();

    C= A + B;

    C.getarea();
}
