#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int mn=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mn)
            {
                mn=prices[i];
                continue;
            }
            if(profit<(prices[i]-mn))
                profit=prices[i]-mn;
        }
        return mx;    
    }
};