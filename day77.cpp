#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[nums[i]]==1)
            {
                if(m.find(nums[i]+1)==m.end() && m.find(nums[i]-1)==m.end())
                    ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};