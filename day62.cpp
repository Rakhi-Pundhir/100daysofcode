#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3)
            return 0;
        int i=0;
        bool peak=false;
        bool valley=false;
        int start;
        int mx=0;
        int n=arr.size();
        while(i<n-1)
        {
            if(arr[i]<arr[i+1])
            {
                start=i;
                while(i<n-1 && arr[i]<arr[i+1])
                {
                    peak=true;
                    i++;
                }
                while(i<n-1 && arr[i]>arr[i+1])
                {
                    valley=true;
                    i++;
                }
                if(peak==true && valley==true)
                {
                    mx=max(mx,i-start+1);
                }
                peak=false;
                valley=false;
            }
            else
                i++;
        }
        return mx;
    }
};