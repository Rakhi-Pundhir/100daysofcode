#include<bits/stdc++.h>
using namespace std;
class SortedStack{
public:
	stack<int> s;
	void sort();
};

void sort(int x,stack<int>&s)
{
    if(s.empty() || s.top()<x)
    s.push(x);
    else
    {
        int a=s.top();
        s.pop();
        sort(x,s);
        s.push(a);
    }
    
}
void reverse(stack<int>&s)
{
    if(s.empty())
    return;
    int x=s.top();
    s.pop();
    reverse(s);
    sort(x,s);
}
void SortedStack :: sort()
{
   
   reverse(s);
}
  