#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

class box
{
private:
    char name[25];
public:
    void getname(char n[25])
    {
        strcpy(name,n);
    }
    void printname(void)
    {
        cout<<"NAME"<<":"<<name<<endl;
    }
};

int main()
{
    box BOX[5];
    char name[25];
    for(int i=0;i<5;i++)
    {
        cout<<"ENTER A NAME:"<<endl;
        scanf(" %[^\n]s",name);
        BOX[i].getname(name);
        BOX[i].printname();
    }
    return 0;
}
