#include<iostream>

using namespace std;

class box
{
    int length;
    int breadth;
    int height;
public:
    box();
    void getvol();
    ~box();
    void set(int a,int b,int c);
};
box::box()
{
    cout<<"CONSTRUCTING THE OBJECT"<<endl;
}
void box::set(int a,int b,int c)
{
    length=a;
    breadth=b;
    height=c;
}
box::~box()
{
    cout<<"DESTRUCTING THE OBJECT\n";
}
void box::getvol()
{
    cout<<"VOL : "<<length*breadth*height<<endl;
}


int main()
{
   box c[3];
   int a,b,p;
   for(int i=0;i<3;i++)
   {
       cin>>a>>b>>p;
       c[i].set(a,b,p);
   }
   for(int i=0;i<3;i++)
   {
      c[i].getvol();
   }

   box *q;
   q=&c[0];

   for(int i=0;i<3;i++)
   {
       cin>>a>>b>>p;
       (q+i)->set(a,b,p);
   }
   for(int i=0;i<3;i++)
   {
       (q+i)->getvol();
   }
   return 0;

}
