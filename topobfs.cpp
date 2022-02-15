#include<bits/stdc++.h>
using namespace std;

vector<int> topo(int v,vector<int> adj[])
{
    vector<int> indegree(v,0);
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<v;i++)
    {
        for(auto it:adj[i])
        {
            indegree[it]++;
        }
    }
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0)
        q.push(i);
    }
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node])
        {
            indegree[it]--;
            if(indegree[it]==0)
            q.push(it);
        }
    }
    return ans;
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
    vector<int> ans;
    ans=topo(v,adj);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}