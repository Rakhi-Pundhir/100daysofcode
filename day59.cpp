#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string decodedString(string s){
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=']')
            st.push(s[i]);
            else
            {
                string ans="";
                while(!st.empty() && st.top()!='[')
                {
                    ans=st.top()+ans;
                    st.pop();
                }
                st.pop();
                string num="";
                while(!st.empty() && isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                }
                int k=stoi(num);
                string copy=ans;
                for(int i=1;i<k;i++)
                {
                    ans+=copy;
                }
                for(char ch:ans)
                {
                    st.push(ch);
                }
            }
        }
        string result="";
        while(!st.empty())
        {
            result=st.top()+result;
            st.pop();
        }
        return result;
    }
};