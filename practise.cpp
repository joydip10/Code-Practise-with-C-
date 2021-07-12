#include<iostream>
#include<conio.h>
using namespace std;
class box
{
public:
    int length;
    int breadth;
    void set(int a,int b);
    void print(void);
};
void box::set(int a,int b)
{
    length=a;
    breadth=b;
}
void box::print(void)
{
    cout<<"Length = "<<length<<endl;
    cout<<"Breadth = "<<breadth<<endl;
}

int main()
{
    box obj[5];
    box *p;

    obj[0].set(1,2);
    obj[1].set(2,3);
    obj[2].set(3,4);
    obj[3].set(4,5);
    obj[4].set(5,6);

    p = obj;

    for(int i =0;i<5;i++)
    {
       (p+i)->print();
    }
}
