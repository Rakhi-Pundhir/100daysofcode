#include<iostream>
#include<stack>
#include<string.h>
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        if(s.length()==0 || s.length()==1)
        return 0;
        stack<char> st; int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else
            {
                if(!st.empty() && st.top()=='(')
                {
                    st.pop();
                    c+=2;
                }
                else
                    continue;
            }
        }
        return c;
    }
};