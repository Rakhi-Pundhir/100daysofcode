#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curr_max=nums[0],curr_min=nums[0],mx=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int temp=curr_max;
            curr_max=max({nums[i],nums[i]*curr_max,nums[i]*curr_min});
            curr_min=min({nums[i],nums[i]*temp,nums[i]*curr_min});
            mx=max(mx,curr_max);
        }
        return mx;
    }
};