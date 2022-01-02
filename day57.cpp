#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0,j=0;
        int c=0,pro=1;
        while(j<n)
        {
            pro*=a[j];
            while(pro>=k)
            {
                pro/=a[i];
                i++;
            }
            
            c=c+(j-i+1);
            j++;
            
        }
        return c;
    }
};