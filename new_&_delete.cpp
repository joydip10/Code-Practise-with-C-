#include<iostream>

using namespace std;


int main()
{
    int *ptr;

    ptr=new int[5];
    int i;
    for(i=0;i<5;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete[]ptr;
    return 0;
}
