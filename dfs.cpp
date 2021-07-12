#include<iostream>
#include<cstdio>
#include<vector>


using namespace std;

vector<int> adj[128];
bool seen[128];
int n, e;

void dfs(int u)
{
    seen[u] = true;
    printf("%d ", u);
    for(int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i];
        if(!seen[v]) dfs(v);
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
    dfs(adj[2][0]);
}
