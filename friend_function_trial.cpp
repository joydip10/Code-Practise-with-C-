#include <iostream>

using namespace std;

class box;
class cost
{
public:
    void counting(int a,box A);
};
class box
{
private:
    int length;
public:
    int getlen(int a){return length=a;}
    friend class cost;

};

void cost::counting(int a,box A){cout<<"Total Cost:"<<a*A.length<<endl;}

int main()
{
    int a=5;
    box obj;
    obj.getlen(2);
    cost Total;
    Total.counting(a,obj);
}

