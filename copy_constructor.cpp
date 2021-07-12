#include<iostream>
#include<cstdio>

using namespace std;

class box
{
    int *p;
public:
    box(){p=new int(6);
    cout<<"Const...."<<endl;}
    ~box(){
        delete p;
        cout<<"dist... "<<*p<<endl;}
box(box &obj)
{
    this->p =new int(7);
    cout<<"Const..."<<endl;

}
public:
    void set(int a){*p=a;}
    void get(void){cout<<*p<<endl;}
};

int main()
{
    box a;
    a.get();
    box b=a;
    a.set(3);
    b.get();
}
