#include <iostream>

using namespace std;

class box
{
public:
   int cubox(int a)
    {
        cout<<a<<" "<<"is the value"<<endl;
    }

};

int main()
{
    box P;
    P.cubox(6);
    box *p;
    p=&P;
    p->cubox(3);


}
