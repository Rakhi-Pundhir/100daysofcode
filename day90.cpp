#include<bits/stdc++.h>
using namespace std;

int findpar(int node,int parent[])
{
    if(node==parent[node])
    return node;
    return parent[node]=findpar(parent[node],parent);
}

void unin(int u,int v,int parent[],int rank[])
{
    int a=findpar(u,parent);
    int b=findpar(v,parent);
    if(rank[a]<rank[b])
    parent[a]=b;
    else if(rank[b]<rank[a])
    parent[b]=a;
    else
    {
        parent[b]=a;
        rank[a]++;
    }
}

int main()
{
    int n;
    cin>>n;
    int parent[n];
    int rank[n];
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
        rank[i]=0;
    }
    int e;
    cin>>e;
    vector<vector<int>> graph;
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph.push_back({w,u,v});
    }
    sort(graph.begin(),graph.end());
    int cost=0;
    vector<pair<int,int>> mst;
    for(auto it:graph)
    {
        int w=it[0];
        int u=it[1];
        int v=it[2];
        if(findpar(u,parent)!=findpar(v,parent))
        {
            cost+=w;
            mst.push_back({u,v});
            unin(u,v,parent,rank);
        }
    }
    for(auto it:mst)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"cost of mst is :"<<cost;
    return 0;
}
    
