#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=0.00;
        int m=nums1.size();
        int n=nums2.size();
        nums1.resize(m+n);
        int i=m+n-1;
        int p1=m-1;
        int p2=n-1;
        while(p2>=0)
        {
            if(p1>=0 && nums1[p1]>nums2[p2])
            {
                nums1[i]=nums1[p1];
                p1--;
            }
            else
            {
                nums1[i]=nums2[p2];
                p2--;
            }
            i--;
        }
            int num=nums1.size();
            if(num%2!=0)
                ans=nums1[(num-1)/2];
        else
            ans=(double)(nums1[(num-2)/2]+nums1[num/2])/2; 
        return ans;
    }
   

};