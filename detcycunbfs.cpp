#include<bits/stdc++.h>
using namespace std;

bool bfscheck(int i,vector<int> adj[],vector<bool> &vis)
{
    vis[i]=true;
    queue<pair<int,int>> q;
    q.push({i,-1});
    while(!q.empty())
    {
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto it:adj[node])
        {
            if(vis[it]==false)
            {
                vis[it]=true;
                q.push({it,node});
            }
            else if(it!=parent)
            return true;
        }
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
        if(bfscheck(i,adj,vis))
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