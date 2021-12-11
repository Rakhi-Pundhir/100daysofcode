#include<bits/stdc++.h>
using namespace std;
char* reverse(char *S, int len)
{
    stack<char> st;
    for(int i=0;i<len;i++)
    {
        st.push(S[i]);
    }
   
    int idx=0;
    while(!st.empty())
    {
        S[idx]=st.top();
        st.pop();
        idx++;
    }
    return S;
}
int main()
{
    char str[100];
    cin>>str;
    int l=strlen(str);
    char *s=reverse(str,l);
    for(int i=0;i<l;i++)
    {
        cout<<s[i];
    }
    return 0;
}

