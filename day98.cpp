#include<bits/stdc++.h>
using namespace std;

bool bfsbip(int i,vector<int> adj[],vector<int> &color)
{
    if(color[i]==-1)
    {
        color[i]=1;
    }
    queue<int> q;
    q.push(i);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
    for(auto it:adj[node])
    {
        if(color[it]==-1)
        {
            color[it]=1-color[i];
            q.push(it);
        }
        else if(color[it]==color[i])
        return false;
    }
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
        if(!bfsbip(i,adj,color))
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
