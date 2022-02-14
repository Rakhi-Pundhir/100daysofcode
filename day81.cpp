#include<bits/stdc++.h>
using namespace std;

void dfs(int i,vector<int> adj[],vector<bool> &vis,vector<int> &ans)
{
    vis[i]=true;
    ans.push_back(i);
    for(auto it:adj[i])
    {
        if(vis[it]==false)
        dfs(it,adj,vis,ans);
    }
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
    vector<int> ans;
    vector<bool> vis(v,false);
    for(int i=0;i<v;i++)
    {
        if(vis[i]==false)
        dfs(i,adj,vis,ans);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
