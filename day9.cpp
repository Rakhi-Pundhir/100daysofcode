#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        int ratio=n/3;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto it: m)
        {
            if(it.second > ratio )
                v.push_back(it.first);
        }
        return v;
    }
};