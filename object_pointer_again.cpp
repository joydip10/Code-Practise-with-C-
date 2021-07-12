#include<iostream>
#include<cstring>
using namespace std;

class person
{
    char name[25];
    int age;
public:
    person(char *n,int a){strcpy(name,n);age=a;}
    void showall()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"AGE:"<<age<<endl;
    }
};

int main()
{
    person CSTE[3]={person("RAHUL",21),person("PRIAM",20),person("SAKIB",21)};
    person* p;
    p=CSTE;
    for(int i=0;i<3;i++)
    {
       (p+i)->showall();
        //p++;
        cout<<endl;
    }
    return 0;
}
