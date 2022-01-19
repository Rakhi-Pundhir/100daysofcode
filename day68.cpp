#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i,j,k,ans=0;
        int n=board.size();
        bool f=false;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(board[i][j]=='R')
                {
                    f=true;
                    break;
                }
            }
            if(f==true)
                break;
        }
        for(k=i+1;k<n;k++)
        {
            if(board[k][j]=='p')
            {
                ans++;
                break;
            }
            if(board[k][j]=='B')
                break;
        }
         for(k=i-1;k>=0;k--)
        {
            if(board[k][j]=='p')
            {
                ans++;
                break;
            }
            if(board[k][j]=='B')
                break;
        }
         for(k=j+1;k<n;k++)
        {
            if(board[i][k]=='p')
            {
                ans++;
                break;
            }
            if(board[i][k]=='B')
                break;
        }
         for(k=j-1;k>=0;k--)
        {
            if(board[i][k]=='p')
            {
                ans++;
                break;
            }
            if(board[i][k]=='B')
                break;
        }
        return ans;
    }
};