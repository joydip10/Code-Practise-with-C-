#include <iostream>

using namespace std;

class box
{
public:
    int length;
    box(int len,int bre);
    ~box();
    int showlength(void);
    int showwidth(void);
    int showarea(void);
private:
    int width;
    int area;
};
box::box(int len,int bre):length(len),width(bre)
{
    cout<<"AN OBJECT HAS BEEN CREATED"<<endl;
}
box::~box()
{
    cout<<"AN OBJECT HAS BEEN DELETED"<<endl;
}
int box::showlength(void)
{
    return length;
}
int box::showwidth(void)
{
    return width;
}
int box::showarea(void)
{
    return length*width;
}

int main()
{
    box A(5,6);

    cout<<"LENGTH : "<<A.showlength()<<endl;
    cout<<"BREADH : "<<A.showwidth()<<endl;
    cout<<"AREA : "<<A.showarea()<<endl;

    cout<<"\n";

    box B(7,5);

    cout<<"LENGTH : "<<B.showlength()<<endl;
    cout<<"BREADH : "<<B.showwidth()<<endl;
    cout<<"AREA : "<<B.showarea()<<endl;

    return 0;
}
