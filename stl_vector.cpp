#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(i);
    }
    for(int j=0;j<vec.size();j++)
    {
        cout<<vec[j]<<endl;
    }
    cout<<"\n\n";
    vec.insert(vec.begin()+1,5);
    for(int j=0;j<vec.size();j++)
    {
        cout<<vec[j]<<endl;
    }
    cout<<"\n\n";

    vec.erase(vec.begin()+2);
    for(int j=0;j<vec.size();j++)
    {
        cout<<vec[j]<<endl;
    }
    cout<<"\n\n";
     vec.clear();
     if(vec.empty())
        cout<<"empty"<<endl;
     else
        cout<<"not empty"<<endl;

}
