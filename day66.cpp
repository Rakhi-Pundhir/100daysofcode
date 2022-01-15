#include<bits/stdc++.h>
using namespace std;
string encode(string src)
{     
  string ans="";
  for(int i=0;i<src.length();i++)
  {
      int c=1;
      while(src[i]==src[i+1])
      {
          c++;
          i++;
      }
      ans+=src[i]+to_string(c);
  }
  return ans;
}