#include<bits/stdc++.h>
const int INF=1e9;
using namespace std;
int main()
{
    vector<vector<int>> dist={{0,5,INF,10},{INF,0,3,INF},{INF,INF,0,1},{INF,INF,INF,0}};
    int n=dist.size();
    for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    if(dist[i][j]>dist[i][k]+dist[k][j])
    dist[i][j]=dist[i][k]+dist[k][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(dist[i][j]==INF)
            cout<<"INF"<<" ";
            else
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}