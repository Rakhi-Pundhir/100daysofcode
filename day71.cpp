#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n==1 || n==0)
        return 0;
        if(arr[0]==0)
        return -1;
        int steps=arr[0];
        int maxr=arr[0];
        int jump=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            return jump;
            maxr=max(maxr,i+arr[i]);
            steps--;
            if(steps==0)
            {
                jump++;
                if(maxr<=i)
                return -1;
                steps=maxr-i;
            }
        }
        
        return -1;
    }
};