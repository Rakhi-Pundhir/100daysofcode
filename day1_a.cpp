#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l=0;
        int m=0;
        int h=nums.size()-1;
        while(m<=h)
        {
            if(nums[m]==0)
            {
               int temp=nums[l];
                nums[l]=nums[m];
                nums[m]=temp;
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else if(nums[m]==2)
            {
                int t=nums[h];
                nums[h]=nums[m];
                nums[m]=t;
                h--;
            }
            
        }
    }
};