#include <iostream>

using namespace std;

class exep
{
    int id;
    string name;
public:
    exep(int a,string b){id=a;name=b;}
    void print(void){cout<<"ERROR ID -"<<id<<name<<endl;}
};
void positive(int a)
{
    cout<<"NO."<<a<<endl;
    try
    {
    if(a<1) throw exep(1,"ERROR FOUND");
    }catch(exep e)
        {
            e.print();
        }

}
int main()
{
    positive(-5);
}
