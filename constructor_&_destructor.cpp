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
        cout<<"CHILD CONSTRUCTOR"<<endl;
    }
    ~smallbox()
    {
        cout<<"CHILD DESTRUCTOR"<<endl;
    }
};
int main()
{
    smallbox PENI;
}

