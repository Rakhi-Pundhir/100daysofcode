#include<bits/stdc++.h>
using namespace std;

bool dfscheck(int i,int parent,vector<int> adj[],vector<bool> &vis)
{
    vis[i]=true;
    for(auto it:adj[i])
    {
        if(vis[it]==false)
        {
           if(dfscheck(it,i,adj,vis))
           return true;
        }
        else if(it!=parent)
        return true;
    }
    return false;
}

bool checkcycle(int v,vector<int> adj[])
{
    vector<bool> vis(v,false);
    for(int i=0;i<v;i++)
    {
        if(vis[i]==false)
        {
        if(dfscheck(i,-1,adj,vis))
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
        adj[v].push_back(u);
    } 
    if(checkcycle(v,adj))
     cout<<"cycle exists";
    else
    cout<<"no cycle";
    return 0;
}
