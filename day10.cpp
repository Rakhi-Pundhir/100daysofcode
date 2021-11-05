#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>v;
        v.push_back(1);
        int i,ans;
        vector<int>::iterator j;
        for(i=2;i<=N;i++)
        {
            int carry=0;
            for(j=v.begin();j!=v.end();j++)
            {
                ans=i*(*j)+carry;
                *j=ans%10;
                carry=ans/10;
            }
                while(carry!=0)
                {
                    v.push_back(carry%10);
                    carry=carry/10;
                }
            
        }
       reverse(v.begin(),v.end());
       return v;
    }
};