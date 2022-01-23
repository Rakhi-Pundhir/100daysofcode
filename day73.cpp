#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i1,i2;
        int n=nums.size();
        for(i1=n-2;i1>=0;i1--)
            if(nums[i1]<nums[i1+1])
                break;
        if(i1<0)
            reverse(nums.begin(),nums.end());
        else
        {
            for(i2=n-1;i2>i1;i2--)
                if(nums[i2]>nums[i1])
                    break;
            swap(nums[i1],nums[i2]);
            reverse(nums.begin()+i1+1,nums.end());
        }
    }
};