#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        int p=0;
        int x=(s.length()/k)*k;
        while(p<x)
        {
            v.push_back(s.substr(p,k));
            p+=k;
        }
        int r=s.length()%k;
        string ans;
        if(r!=0)
        {
            ans+=s.substr(p);
            for(int i=0;i<(k-r);i++)
            {
                ans+=fill;
            }
            v.push_back(ans);
        }
        return v;
    }
};