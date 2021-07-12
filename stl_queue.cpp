#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> myQ;
    for(int i=0;i<10;i++)
    {
        myQ.push(i);
    }
    cout<<"FIRST ELEMENT : "<<myQ.front()<<endl;
    cout<<"LAST ELEMENT : "<<myQ.back()<<endl;
    cout<<"SIZE OF THE QUEUE : "<<myQ.size()<<endl;
    cout<<"AFTER DEQUEING :\n";
    myQ.pop();
    cout<<"FIRST ELEMENT : "<<myQ.front()<<endl;
    cout<<"LAST ELEMENT : "<<myQ.back()<<endl;

    cout<<"SIZE OF THE QUEUE : "<<myQ.size()<<endl;
    //cout<<"LAST ELEMENT : "<<myQ.back()<<endl;
    if(myQ.empty())
    {
        cout<<"EMPTY QUEUE"<<endl;
    }
    else
    {
        cout<<"NON-EMPTY QUEUE"<<endl;
    }
}
