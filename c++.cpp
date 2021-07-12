#include<iostream>

using namespace std;

class box
{
public:
    int length;
    int breadth;
    box(int a,int b)
    {
        this->length=a;
        this->breadth=b;
        cout<<"Length :"<<length<<endl;
        cout<<"Breadth :"<<breadth<<endl;
    }
    void area()
    {
        cout<<"Area : "<<length*breadth<<endl;
    }
};
int main()
{
    box pentagon[5]={box(1,2),box(2,3),box(3,4),box(4,5),box(5,6)};
    box *p;
    p=pentagon;
    for(int i=0;i<5;i++)
    {
         (p+i)->area();
    }
}
