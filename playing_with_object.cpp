#include<iostream>

using namespace std;

class box
{
private:
    int length;
    int breadth;
public:
    int area();
    box();
    ~box();
    void setlen(int a);
    void setbre(int b);
};
void box::setlen(int a)
{
    length=a;
}
void box::setbre(int b)
{
    breadth=b;
}
box::box()
{
    cout<<"Constructor"<<endl;
}
box::~box()
{
    cout<<"Destructor"<<endl;
}

int box::area()
    {

        return length*breadth;
    }

class littlebox:public box
{
public:
    littlebox()
    {
        cout<<"chiild constructor"<<endl;
    }
    ~littlebox()
    {
        cout<<"child destructor"<<endl;
    }
};
void scan(box p[],int i)
{
    int a,b;
    for(int k=0;k<i;k++)
    {
      cin>>a>>b;
      p[k].setlen(a);
      p[k].setbre(b);
    }
}
void print(box p[],int i)
{
    for(int j=0;j<i;j++)
    {
        cout<<p[j].area()<<endl;
    }
}
littlebox great(littlebox p[],int i)
{
    littlebox l;
    for(int k=0;k<i;k++)
    {
        for(int t=0;t<i;t++)
        {
            if(p[k].area()>p[t].area())
            {
                l=p[k];
            }
        }
    }
    return l;
}
int main()
{
   littlebox p[5];
   scan(p,5);
   print(p,5);
   cout<<great(p,5).area()<<endl;
}
