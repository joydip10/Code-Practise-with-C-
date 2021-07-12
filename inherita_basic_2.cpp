#include<iostream>

using namespace std;

class box
{
    int height;
    int width;
public:
    box(int a,int b){height=a;width=b;}
    void showparameters(void)
    {
        cout<<"HEIGHT = "<<height<<endl;
        cout<<"WIDTH = "<<width<<endl;
    }
};
class BOX:public box
{
    int area;
public:
    BOX(int a,int b):box(a,b)
    {
        area=a*b;
    }
    void showall(void)
    {
        showparameters();
        cout<<"AREA = "<<area<<endl;

    }

};
int main()
{
    BOX A(1,2);
    A.showall();

}
