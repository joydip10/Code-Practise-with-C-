#include <iostream>
#include <cstring>

using namespace std;

class Person;
class Details
{
public:
    void Dettails(Person A);

};
class Person
{
private:
    char name[25];
    int age;
    char profession[25];
public:
    void getname(char n[10]){strcpy(name,n);}
    void getage(int a){age=a;}
    void getprof(char n[25]){strcpy(profession,n);}
public:
    friend void Details::Dettails(Person A);
};

void Details::Dettails(Person A)
{


    cout<<"NAME :"<<A.name<<endl;
    cout<<"AGE  :"<<A.age<<endl;
    cout<<"PROFESSION  :"<<A.profession<<endl;
}
int main()
{
     Person Joy;
     Joy.getname("JOY");
     Joy.getage(23);
     Joy.getprof("STUDENT");
     Details JD;
     JD.Dettails(Joy);
     return 0;
}

