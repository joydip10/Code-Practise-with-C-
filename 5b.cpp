#include<iostream>

using namespace std;

class person
{
public:
    string name;
    string telephone;
};
int main(){
person *p=new person;
(*p).name="JOY DIP DAS";
cout<<(*p).name<<endl;
(*p).telephone="01872395750";
cout<<(*p).telephone<<endl;
delete p;
}
