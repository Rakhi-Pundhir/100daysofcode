#include<bits/stdc++.h>
using namespace std;

bool dfscheck(int i,vector<int> adj[],vector<bool> &vis,vector<bool> &dfsvis)
{
    vis[i]=true;
    dfsvis[i]=true;
    for(auto it:adj[i])
    {
        if(vis[it]==false)
        {
           if(dfscheck(it,adj,vis,dfsvis))
           return true;
        }
        else if(dfsvis[it]==true)
        return true;
    }
    dfsvis[i]=false;
    return false;
}

bool checkcycle(int v,vector<int> adj[])
{
    vector<bool> vis(v,false);
    vector<bool> dfsvis(v,false);
    for(int i=0;i<v;i++)
    {
        if(vis[i]==false)
        {
        if(dfscheck(i,adj,vis,dfsvis))
         return true;
        }
    }
    return false;
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
    } 
    if(checkcycle(v,adj))
     cout<<"cycle exists";
    else
    cout<<"no cycle";
    return 0;
}