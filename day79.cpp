#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int operations(int arr[], int n)
{
    int start = 0, end = n-1,op=0;
    while (start <= end)
    {
        if(arr[start]==arr[end])
        {
            start++;
            end--;
        }
        else if(arr[start]>arr[end])
        {
            end--;
            arr[end]=arr[end]+arr[end+1];
            op++;
        }
        else{
            start++;
            arr[start]=arr[start]+arr[start-1];
            op++;
        }
     
    }
    return op;
}
};