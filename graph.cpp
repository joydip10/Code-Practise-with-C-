#include<iostream>
#include<vector>
#define MAX 1000
using namespace std;
int main()
{
    vector<int> graph[MAX],costs[MAX];
    int nodes,edges,cost;
    cout<<"ENTER THE NUMBER OF NODES\n";
    cin>>nodes;
    cout<<"ENTER THE NUMBER OF EDGES\n";
    cin>>edges;
    int x,y;
    for(int i = 0 ; i<edges ; i++)
    {
        cout<<"ENTER THE EDGES NO. "<<i+1<<endl;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        costs[x].push_back(1);
        costs[y].push_back(1);

    }
    for(int j = 1;j<=nodes;j++)
    {
        cout<<"NODES ON EDGE NO."<<j<<": ";
        int s = graph[j].size();

        for(int i =0 ;i< s;i++)
           {
              cout<<graph[j][i]<<" ";
           }
           cout<<endl<<"number of nodes attached to this node: "<<graph[j].size()<<endl;
        cout<<endl;
    }

}
