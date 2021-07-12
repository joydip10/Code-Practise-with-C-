#include<iostream>

using namespace std;

class box
{
public:
    void print(int a)
    {
        cout<<"A = "<<a<<endl;
    }
};
int main()
{
    box NIKE[5];
    box *p;
    p=NIKE;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        (p+i)->print(a);

    }
}
