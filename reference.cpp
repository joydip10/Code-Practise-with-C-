#include <iostream>

using namespace std;

int main()
{
    int i=10;
    int& ref_i=i;
    cout<<"VALUE BEFORE CHANGING I="<<" "<<ref_i<<endl;
    i=15;
    cout<<"VALUE AFTER CHANGING I="<<" "<<ref_i<<endl;
    int b=10;
    const int& ref_b=b;
    cout<<"VALUE BEFORE CHANGING B="<<" "<<ref_b<<endl;
    b=15;
    cout<<"VALUE AFTER CHANGING B="<<" "<<ref_b<<endl;
}
