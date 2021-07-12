#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1,g2;
    vector <int> :: iterator i;
    vector <int> :: iterator k;
    vector <int> :: reverse_iterator ir;

    for(int k=0;k<5;k++)
    {
        g1.push_back(k);
    }
    for(i=g1.begin();i!=g1.end();i++)
    {
           cout<<*i<<endl;

    }
    g1.assign(5,3);
    for(i=g1.begin();i!=g1.end();i++)
    {

            cout<<*i<<endl;

    }
    k=g1.begin()+1;
    g2.assign(k, g1.end() - 1);
    for(k=g2.begin();k!=g2.end();k++)
    {

            cout<<*k<<endl;

    }
    return 0;

}
