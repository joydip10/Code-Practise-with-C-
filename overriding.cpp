#include <iostream>

using namespace std;

class base
{
public:
    virtual void print(void)=0;

};

class derived:public base
{
public:
        void print(void)
    {
        cout<<"DERIVED CLASS"<<endl;
    }
};
int main()
{
    base *p;
    derived d;
    p=&d;
    p->print();
}
