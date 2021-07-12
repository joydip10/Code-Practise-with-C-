#include <iostream>
#include <queue>
#define V 4
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
    int adj[][V]={
    {0,1,0,1},
    {1,0,1,0},
    {0,1,0,1},
    {1,0,1,0}
    };

    chkbpt(adj,0)?cout<<"Yes":cout<<"No";
    return 0;
}
