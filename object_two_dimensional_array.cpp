#include <iostream>

using namespace std;

class box
{
    int a,b;
public:
    box(int l,int m){a=l;b=m;}
    void getval(int p,int q){cout<<"obj["<<p<<"]"<<"["<<q<<"]"<<"="<<a+b<<endl;}
};
int main()
{
    box obj[2][3]={box(2,3),box(1,2),box(2,5),
                   box(5,6),box(8,9),box(1,9)};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            obj[i][j].getval(i,j);
        }
    }
}

