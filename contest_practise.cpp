#include<iostream>
#include<string.h>

using namespace std;

class stringlength
{
public:
    char *p;
    void print()
    {
        cout<<p<<" "<<strlen(p)<<endl;
    }
    stringlength()
    {
        p=new char[50];
    }
    stringlength(stringlength& obj)
    {
        strcpy(p,obj.p);
    }

};

int main()
{
    stringlength str1;

    strcpy(str1.p,"RANCHORDAS");

    cout<<"Before\n";

    str1.print();

    stringlength str2=str1;

    strcpy(str1.p,"PHUNGSUNG");

    cout<<"After\n";

    str1.print();
    str2.print();

    return 0;
}
