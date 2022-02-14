#include<bits/stdc++.h>
using namespace std;

void dfs(int tr,int tc,vector<vector<int>> &grid,int r,int c)
{
    if(r<0 || c<0 || r>=tr || c>=tc || grid[r][c]!=1)
    return;
    grid[r][c]=2;
    dfs(tr,tc,grid,r+1,c);
    dfs(tr,tc,grid,r-1,c);
    dfs(tr,tc,grid,r,c+1);
    dfs(tr,tc,grid,r,c-1);
}

int islands(vector<vector<int>> &grid)
{
    int ans=0;
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]==1)
            {
                ans++;
                dfs(grid.size(),grid[0].size(),grid,i,j);
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    vector<vector<int>> grid;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            grid[i][j]=x;
        }
    }
    int ans=islands(grid);
    cout<<ans<<endl;
    return 0;
}
