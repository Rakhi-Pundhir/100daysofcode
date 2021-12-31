#include<bits/stdc++.h>
using namespace std;
bool cycle(int src,vector<int> g[],bool v[],int parent)
{
    v[src]=true;
    for(auto it:g[src])
    {
        if(it!=parent)
        {
            if(v[it]==true)
            return true;
            if(v[it]==false && cycle(it,g,v,src))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> graph[v];
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bool vis[v]={false};
    bool f=cycle(0,graph,vis,-1); 
    cout<<f<<endl;
    return 0;
}
