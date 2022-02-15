#include<bits/stdc++.h>
using namespace std;

bool checkcycle(int v,vector<int> adj[])
{
    vector<int> indegree(v,0);
    queue<int> q;
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
    int count=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        count++;
        for(auto it:adj[node])
        {
            indegree[it]--;
            if(indegree[it]==0)
            q.push(it);
        }
    }
    if(count==v)
    return false;
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
    } 
    if(checkcycle(v,adj))
     cout<<"cycle exists";
    else
    cout<<"no cycle";
    return 0;
}
