#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution 
{
    public:
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        for(int i=0;i<M.size();i++)
        {
            st.push(i);
        }
        while(st.size()>=2)
        {
            int i=st.top();
            st.pop();
            int j=st.top();
            st.pop();
            if(M[i][j]==0)
            st.push(i);
            else if(M[i][j]==1)
            st.push(j);
        }
        int x=st.top();
        st.pop();
        for(int i=0;i<M.size();i++)
        {
            if(i!=x)
            {
               if(M[i][x]==0 || M[x][i]==1)
               return -1;
            }
        }
        return x;
    }
};