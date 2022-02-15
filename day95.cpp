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
int parent[v];
int key[v];
bool mst[v];
for(int i=0;i<v;i++)
{
    key[i]=INT_MAX;
    parent[i]=-1;
    mst[i]=false;
}
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
key[0]=0;
pq.push({0,0});
for(int i=0;i<v-1;i++)
{
    int node=pq.top().second;
    pq.pop();
    mst[node]=true;
    for(auto it: adj[node])
    {
        int nextnode=it.first;
        int w=it.second;
        if(mst[nextnode]==false && w<key[nextnode])
        {
            key[nextnode]=w;
            pq.push({key[nextnode],nextnode});
            parent[nextnode]=node;
        }
    }
}
for(int i=1;i<v;i++)
{
    cout<<i<<"-->"<<parent[i]<<endl;
}
return 0;
}
