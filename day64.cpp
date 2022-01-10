#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        if(n%2!=0)
        return false;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[(nums[i]%k)]++;
        }
        for(int i=0;i<n;i++)
        {
            int rem=nums[i]%k;
            if(rem==0)
            {
                if(m[rem]%2!=0)
                return false;
            }
            else if(2*rem==k)
            {
                if(m[rem]%2!=0)
                return false;
            }
            else
            {
                int a=m[rem];
                int b=m[k-rem];
                if(a!=b)
                return false;
            }
        }
       return true; 
    }
};