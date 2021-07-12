#include <iostream>

using namespace std;

class box
{
public:
    int length;
    int breadth;
    int area(void)
    {
        return length*breadth;
    }
};
int main()
{
    box obj[5];

    for(int i=0;i<5;i++)
    {
        cout<<"obj no."<<i+1<<endl;
        cout<<"ENTER LENGTH: ";
        cin>>obj[i].length;
        cout<<"ENTER BREADTH: ";
        cin>>obj[i].breadth;
        cout<<"AREA: "<<obj[i].area()<<endl;
    }
}
