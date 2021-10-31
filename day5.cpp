#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int water=0;
        vector<int>left(n);
        vector<int>right(n);
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=max(height[i],left[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(height[i],right[i+1]);
        }
        for(int i=0;i<n;i++)
        {
            water+=min(left[i],right[i])-height[i];
        }
        return water;
    }
};