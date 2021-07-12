#include <iostream>
#include <queue>
#define V 7
using namespace std;
bool chkbpt(int adj[][V], int s)
{
    int color[V];
    for (int i=0;i<V;++i)
        color[i]=-1;
    color[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(adj[u][u]==1)
           return false;
        for(int v= 0;v<V;++v)
        {
            if(adj[u][v]&&color[v]==-1)
            {
                color[v]=1-color[u];
                q.push(v);
            }
            else if(adj[u][v]&&color[v]==color[u])
                return false;
        }
    }
    return true;
}
int main()
{
    int adj[V][V];
    for(int i=1;i<=V;i++)
    {
        for(int j=1;j<=V;j++)
        {
            int x;
            cin>>x;
            adj[i][j]=x;
        }
    }

    chkbpt(adj,0)?cout<<"Yes":cout<<"No";
    return 0;
}
