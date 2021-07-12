#include <iostream>

using namespace std;

class box
{
public:
    box(){
    cout<<"PARENT CONSTRUCTOR"<<endl;
    }
    ~box()
    {
        cout<<"PARENT DESTRUCTOR"<<endl;
    }
};
class smallbox:box
{
public:
    smallbox()
    {
        cout<<"CHILD_1 CONSTRUCTOR"<<endl;
    }
    ~smallbox()
    {
        cout<<"CHILD_1 DESTRUCTOR"<<endl;
    }
};
class littlebox:box
{
public:
    littlebox()
    {
        cout<<"CHILD_2 CONSTRUCTOR"<<endl;
    }
    ~littlebox()
    {
       cout<<"CHILD_2 DESTRUCTOR"<<endl;
    }
};
int main()
{
    smallbox PENI;
    littlebox CHESRA;
}

