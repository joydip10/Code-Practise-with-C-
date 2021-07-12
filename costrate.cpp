#include <iostream>

using namespace std;

class box
{
    int height;
    int width;
public:
    void setvalues(int a,int b){height=a;width=b;}
    int area(void){return height*width;}
};
class cost
{
public:
    int cost;
    void setcost(int a){cost=a;}
    int totalcost(box a){return cost*a.area();}
};

int main()
{
    box BOX;
    BOX.setvalues(2,3);
    cout<<"AREA OF THE BOX : "<<BOX.area()<<endl;
    cost COST;
    COST.setcost(1000000);
    cout<<"TOTAL COST IS : "<<COST.totalcost(BOX)<<endl;

}
