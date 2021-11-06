#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i,rs=0,cs=0,re=matrix.size()-1,ce=matrix[0].size()-1;
        vector<int> ans;
        while(rs<=re || cs<=ce )
        {
        for(i=cs;i<=ce;i++)
        ans.push_back(matrix[rs][i]);
        rs++;
            if(rs>re)
                break;
        for(i=rs;i<=re;i++)
            ans.push_back(matrix[i][ce]);
        ce--;
            if(cs>ce)
                break;
        for(i=ce;i>=cs;i--)
            ans.push_back(matrix[re][i]);
        re--;
            if(rs>re)
                break;
        for(i=re;i>=rs;i--)
            ans.push_back(matrix[i][cs]);
        cs++;
            if(cs>ce)
                break;
        }
        return ans;
    }
    
};