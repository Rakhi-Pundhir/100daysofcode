#include<bits/stdc++.h>
const int INF=1e9;
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int u,v,w;
    vector<vector<int>> graph;
    for(int i=0;i<e;i++)
    {
        
        cin>>u>>v>>w;
        graph.push_back({u,v,w});
    }
    int src;
    cin>>src;
    vector<int> dist(n,INF);
    dist[src]=0;
    for(int i=0;i<n-1;i++)
    {
        for(auto it:graph)
        {
            u=it[0];
            v=it[1];
            w=it[2];
            dist[v]=min(dist[v],dist[u]+w);
        }
    }
    bool f=false;
    for(auto it:graph)
        {
            u=it[0];
            v=it[1];
            w=it[2];
            if(dist[v]>dist[u]+w)
            {
                cout<<"Negative Cycle";
                f=true;
                break;
            }
        }
    if(f==false)
    {
        for(auto d:dist)
       {
        cout<<d<<" ";
       }
    }
    return 0;
}
