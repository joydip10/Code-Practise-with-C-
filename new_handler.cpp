#include<iostream>
#include<stdlib.h>

using namespace std;

void MemError()
{
    cout<<"Allocation Fails !!!"<<endl;
    exit(1);
}

int main()
{
    set_new_handler(MemError);

    int *ptr;
    ptr=new int[5000];

    *ptr=50;
    cout<<"First element : "<<*ptr<<endl;
    set_new_handler(0);

    delete [] ptr;
}
