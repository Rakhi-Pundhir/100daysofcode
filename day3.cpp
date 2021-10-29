#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=0,mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            cur=cur+nums[i];
            mx=max(mx,cur);
            if(cur<0)
                cur=0;
        }
        return mx;
    }
};