#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int i,j,k;
	    long long count=0;
	    for(i=0;i<n-2;i++)
	    {
	        j=i+1;
	        k=n-1;
	        while(j<k)
	        {
	            if(arr[i]+arr[j]+arr[k]<sum)
	            {
	                count=count+(k-j);
	                j++;
	            }
	            else
	            {
	              k--;  
	            }
	        }
	    }
	    return count;
	}
		 

};