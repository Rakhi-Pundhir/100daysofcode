#include<bits/stdc++.h>
using namespace std;
    string printMinNumberForPattern(string s){
        stack<int> st;
        string ans="";
        int x=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='D')
            {
                st.push(x);
                x++;
            }
            else
            {
                st.push(x);
                x++;
                while(!st.empty())
                {
                    int a=st.top();
                    st.pop();
                    ans+=to_string(a);
                }
            }
        }
        st.push(x);
        while(!st.empty())
        {
            int a=st.top();
            st.pop();
            ans+=to_string(a);
        }
        return ans;
    }