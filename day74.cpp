#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(int t, int d) {
        int m=0;
        while(d>0 && t>1)
        {
            if(t%2!=0)
            {
                t=(t-1)/2;
                d--;
                m+=2;
            }
            else
            {
                t=t/2;
                d--;
                m++;
            }
        }
        if(t>1)
         m+=t-1;
        return m;
    }
};