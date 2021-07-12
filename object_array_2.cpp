#include <iostream>

using namespace std;

class box
{
public:
    int height;
   void value(int a)
    {
        height=a;
        cout<<"HEIGHT="<<height<<endl;
    }
};
int main()
{
    box A[5];
    int T=5;
    while(T--)
    {
        int a;
        cin>>a;
        A[T].value(a);
    }
}
