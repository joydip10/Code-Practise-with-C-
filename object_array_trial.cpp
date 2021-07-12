#include<iostream>
#include<algorithm>
using namespace std;
class rect
{
    int height;
    int width;
public:
    void set_all(int h,int w){height=h;width=w;}
    int area(){ return height*width;}
};
int main()
{
    rect obj[5];
    rect *ptr;
    ptr=obj;
    for(int i=0;i<5;i++)
    {
        int a,b;

        for(int i=0;i<5;i++){
        cin>>a>>b;
        cin.sync();
        (ptr+i)->set_all(a,b);
        cout<<"AREA of the  number  "<< i+1 <<" object : "<<(ptr+i)->area()<<endl;
        }
    }
    return 0;
}
