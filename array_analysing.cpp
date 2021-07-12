#include<iostream>

using namespace std;

int main()
{
    int A[10];
    int i;
    for(i=0;i<10;i++)
    {
        cin>>A[i];
    }
        for(i=0;i<10;i++)
    {
        cout<<"A["<<i+1<<"]"<<"="<<A[i]<<endl;
    }
}
