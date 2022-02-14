#include<bits/stdc++.h>
using namespace std;

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
    vector<bool> vis(v,false);
    vector<int> ans;
    stack<int> st;
    for(int i=0;i<v;i++)
    {
        if(vis[i]==false)
        dfstopo(i,adj,vis,st);
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}