#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string x) {
          stack<char> st;
        bool ans=true;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
            st.push(x[i]);
            else if(x[i]==')')
            {
                if(!st.empty() && st.top()=='(')
                st.pop();
                else
                {
                    ans=false;
                    break;
                }
            }
            else if(x[i]=='}')
            {
                if(!st.empty() && st.top()=='{')
                st.pop();
                else
                {
                    ans=false;
                    break;
                }
            }
            else if(x[i]==']')
            {
                if(!st.empty() && st.top()=='[')
                st.pop();
                else
                {
                    ans=false;
                    break;
                }
            }
        }
        if(ans && st.empty())
        return true;
        return false;  
    }
};