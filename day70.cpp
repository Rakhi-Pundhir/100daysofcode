#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
        int sd=0;
        int mx=0;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            v.push_back({growTime[i],plantTime[i]});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(int i=0;i<n;i++)
        {
            int x=v[i].first+v[i].second;
            int bd=x+sd;
            sd+=v[i].second;
            mx=max(mx,bd);
        }
        return mx;
    }
};