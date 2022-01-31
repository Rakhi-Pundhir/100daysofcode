#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int length(int arr[], int n, int x)
{
    int sum = 0, mn= INT_MAX;
    int start = 0, end = 0;
    while (end < n) {
        while (sum <= x && end < n)
        {
            sum += arr[end];
            end++;
        }
        while (sum > x && start < n) {
            if (end - start < mn)
                mn = end - start;
            sum -= arr[start];
            start++;
        }
    }
    return mn;
}
};