#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        int dp[n];
	    dp[0]=1;
	    int p2=0,p3=0,p5=0;
	    for(int i=1;i<n;i++)
	    {
	        int f2=dp[p2]*2;
	        int f3=dp[p3]*3;
	        int f5=dp[p5]*5;
	        dp[i]=min(f2,min(f3,f5));
	        if(dp[i]==f2)
	        {
	            p2++;
	        }
	        if(dp[i]==f3)
	        {
	            p3++;
	        }
	        if(dp[i]==f5)
	        {
	            p5++;
	        }
	    }
	    return dp[n-1];
    }
};