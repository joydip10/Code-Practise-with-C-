#include<iostream>

using namespace std;

int main()
{
    int a;

    for(a=0;a<3;a++)
    {
        for(int c=0;c<3;c++)
        {
            for(int d=c;d<3;d++)
                cout<<' ';
        }

        for(int b=a;b<3;b++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
}
