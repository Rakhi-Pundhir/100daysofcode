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
    int m;
    cin>>m;
    int u,v;
    while(m--)
    {
        cin>>u>>v;
        unin(u,v,parent,rank);
    }
    if(findpar(2,parent)!=findpar(3,parent))
    cout<<"different components";
    else
    cout<<"same componenets";
    return 0;
}
