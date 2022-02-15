#include<bits/stdc++.h>
using namespace std;
void bfs(int src,vector<int> g[],bool v[])
{
    queue<int> q;
    q.push(src);
    v[src]=true;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        for(int i=0;i<g[curr].size();i++)
        {
            if(v[g[curr][i]]==false)
            {
                q.push(g[curr][i]);
                v[g[curr][i]]=true;
            }
        }
    }
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
   bfs(0,graph,vis);
    return 0;
}
