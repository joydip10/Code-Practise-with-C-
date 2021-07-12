#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    vec.erase(vec.begin());
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec.at(i)<<endl;
    }
}
