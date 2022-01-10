#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int total=0,qc=0,fo=0,time=0;
        int i,j;
        int m=grid.size();
        int n=grid[0].size();
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]!=0)
                    total++;
                if(grid[i][j]==1)
                    fo++;
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        if(fo==0)
            return 0;
        int dr[4]={0,0,1,-1};
        int dc[4]={1,-1,0,0};
        while(!q.empty())
        {
            int x=q.size();
            qc+=x;
            while(x--)
            {
                auto it=q.front();
                q.pop();
                int r=it.first;
                int c=it.second;
                for(i=0;i<4;i++)
                {
                    int nr=r+dr[i];
                    int nc=c+dc[i];
                    if(nr<0 || nr>=m || nc<0 || nc>=n || grid[nr][nc]!=1)
                        continue;
                    grid[nr][nc]=2;
                    q.push({nr,nc});
                }
            }
            if(!q.empty())
                time++;
        }
        return (total==qc)?time:-1;
    }
};
