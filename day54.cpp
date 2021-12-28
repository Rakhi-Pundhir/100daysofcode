#include<bits/stdc++.h>
using namespace std;
void dfs(int src,vector<int> g[],bool v[])
{
    
    v[src]=true;
    cout<<src<<" ";
    for(int i=0;i<g[src].size();i++)
    {
        if(v[g[src][i]]==false)
        dfs(g[src][i],g,v);
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> graph[v];
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
   bool vis[v]={false};
   dfs(0,graph,vis);
    return 0;
}