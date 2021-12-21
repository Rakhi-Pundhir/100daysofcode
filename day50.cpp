#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin>>v>>e;
    int graph[v][v];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            graph[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)
    {
       int x,y;
       cin>>x>>y;
       graph[x][y]=1;
       graph[y][x]=1;
    }
    for(int i=0;i<v;i++)
    {
        cout<<i<<"--> ";
        for(int j=0;j<v;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}