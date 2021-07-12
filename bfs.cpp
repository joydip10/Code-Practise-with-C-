#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>adj[1000];
int visited[100];
int dist[100];
void bfs(int s, int n)
{
    for(int i=0;i<n;i++){
            visited[i] = 0;

    }
    queue<int> Q;
    Q.push(s);
    visited[s]=1;

    while(!Q.empty())
    {
        int u= Q.front();
        cout<<u<<" ";
        Q.pop();
        for(int i =0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v = adj[u][i];
                visited[v] = 1;

                //cout<<v<<" ";
                Q.push(v);
            }
        }
    }
}
int main()
{
    int nodes,edges;
    cout<<"ENTER THE NUMBER OF NODES\n";
    cin>>nodes;
    cout<<"ENTER THE NUMBER OF EDGES\n";
    cin>>edges;
    int x,y;
    for(int i = 0 ; i<edges ; i++)
    {
        cout<<"ENTER THE EDGES NO. "<<i+1<<endl;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int a=1,b=nodes;
    bfs(1,nodes);
    cout<<endl;

    return 0;
}


