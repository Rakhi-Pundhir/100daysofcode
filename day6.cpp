#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int i,index=0;
        for(i=1;i<intervals.size();i++)
        {
            if(intervals[index][1]>=intervals[i][0])
            {
                intervals[index][1]=max(intervals[index][1],intervals[i][1]);               
            }
            else
            {
                index++;
                intervals[index]=intervals[i];
            }
        }
       for(i=0;i<=index;i++)
       {
           ans.push_back(intervals[i]);
       }
        return ans;
    }
};