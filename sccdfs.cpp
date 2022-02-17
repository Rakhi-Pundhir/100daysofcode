#include<bits/stdc++.h>
using namespace std;

// kosaraju algorithm for strongly connected components

void dfstopo(int i,vector<int> adj[],vector<bool> &vis,stack<int> &st)
{
    vis[i]=true;
    for(auto it:adj[i])
    {
        if(vis[it]==false)
        {
           dfstopo(it,adj,vis,st);
        }
    }
    st.push(i);
}

void dfs(int i,vector<int> adj[],vector<bool> &vis)
{
    vis[i]=true;
    cout<<i<<" ";
    for(auto it:adj[i])
    {
        if(vis[it]==false)
        {
           dfs(it,adj,vis);
        }
    }
}

int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    } 
    vector<bool> vis(v,false);
    stack<int> st;

    for(int i=0;i<v;i++)
    {
        if(vis[i]==false)
        dfstopo(i,adj,vis,st);
    }

    vector<int> transpose[v];
    for(int i=0;i<v;i++)
    {
        vis[i]=false;
        for(auto it: adj[i])
        {
           transpose[it].push_back(i);
        }
    }

    while(!st.empty())
    {
        int node=st.top();
        st.pop();
        if(vis[node]==false)
        {
            dfs(node,transpose,vis);
            cout<<endl;
        }
    }
    
    return 0;
}