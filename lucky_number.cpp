#include<iostream>

using namespace std;
void find_it(int num)
{
    int c=-1;
    for(int i=1;;i+=2)
    {
        c++;
        if(c==num){
            if(c%3==0)
        {i+=2;}
                cout<<i<<endl;
        break;}
    }
}
int main()
{
    find_it(5);
}
