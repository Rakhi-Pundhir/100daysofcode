#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>> adj[v];
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    } 
    int source;
    cin>>source;

    vector<int> dist(v,INT_MAX); 
    dist[source]=0;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,source});

    while(!pq.empty())
    {
        int d=pq.top().first;
        int node=pq.top().second;
        pq.pop();
       for(auto it:adj[node])
       {
           int nextnode=it.first;
           int wgt=it.second;
           if(dist[nextnode] > dist[node] + wgt)
           {
               dist[nextnode]=dist[node]+wgt;
               pq.push({dist[nextnode],nextnode});
           }
       }

    }
    for(int i=0;i<v;i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;