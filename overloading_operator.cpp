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

box operator+(const box& b)
{
    box JOY;
    JOY.height=this->height+b.height;
    JOY.breadth=this->breadth+b.breadth;
    return JOY;
}
};
int main()
{
    box A;
    box B;
    box C;

    A.setheight(5);
    A.setbreadth(5);
    cout<<"AREA OF THE FIRST BOX:";
    A.getarea();

    B.setheight(5);
    B.setbreadth(5);
    cout<<"AREA OF THE SECOND BOX:";
    B.getarea();

    C= A + B;
    cout<<"AREA OF THE NEW BOX:";
    C.getarea();
}
