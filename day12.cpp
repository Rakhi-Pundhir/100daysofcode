#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rs=0,cs=0,re=matrix.size()-1,ce=matrix[0].size()-1;
        int i,mid;
        for(i=rs;i<=re;i++)
        {
            if(target>matrix[i][ce])
            continue;
            else if(target<matrix[i][cs])
                return false;
            else
            {
                while(cs<=ce)
                {
                    mid=cs+(ce-cs)/2;
                    if(matrix[i][mid]==target)
                        return true;
                    else if(matrix[i][mid]>target)
                        ce=mid-1;
                    else
                        cs=mid+1;
                }
                return false;
            }
        }
        return false;
    }
};