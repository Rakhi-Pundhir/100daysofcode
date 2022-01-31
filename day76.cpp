#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n1=nums.size();
        int i,n=0,p=0;
        vector<int> nv(n1/2);
        vector<int> pv(n1/2);
        for(i=0;i<n1;i++)
        {
             if(nums[i]<0)
            {
                nv[n]=nums[i];
                n++;
                }
            else{
                pv[p]=nums[i];
                p++;
            }
        }
        n=0;
        p=1;
        nums[0]=pv[0];
        i=1;
        while(i<n1-1)
        {
            nums[i]=nv[n];
            nums[i+1]=pv[p];
            i+=2;
            n++;
            p++;
        }
        nums[i]=nv[n];
        return nums;
    }
};