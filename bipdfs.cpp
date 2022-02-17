#include<bits/stdc++.h>
using namespace std;

bool dfsbip(int i,vector<int> adj[],vector<int> &color)
{
    if(color[i]==-1)
    {
        color[i]=1;
    }
    for(auto it:adj[i])
    {
        if(color[it]==-1)
        {
            color[it]=1-color[i];
            if(!dfsbip(it,adj,color))
            return false;
        }
        else if(color[it]==color[i])
        return false;
    }
    return true;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0;i<v;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool f=true;
    vector<int> color(v,-1);
    for(int i=0;i<v;i++)
    {
        if(!dfsbip(i,adj,color))
        {
            f=false;
            break;
        }
    }
    if(f==false)
    cout<<"not bipartite";
    else
    cout<<"bipartite graph";
    return 0;
}