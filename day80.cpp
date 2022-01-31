#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n=nums.size();
        int i,s;
        vector<int> ans;
        vector<int> lz(n+1);
        vector<int> ro(n+1);
        lz[0]=0;
        ro[n]=0;
        for(i=1;i<=n;i++)
        {
            if(nums[i-1]==0)
                s=1;
            else
                s=0;
            lz[i]=lz[i-1]+s;
        }
        for(i=n-1;i>=0;i--)
        {
            if(nums[i]==1)
                s=1;
            else
                s=0;
            ro[i]=ro[i+1]+s;
        }
        int mx=INT_MIN;
        for(i=0;i<=n;i++)
        {
            if(lz[i]+ro[i]>mx)
                mx=lz[i]+ro[i];
        }
        for(i=0;i<=n;i++)
        {
            if((lz[i]+ro[i])==mx)
                ans.push_back(i);
        }
        return ans;
    }
};