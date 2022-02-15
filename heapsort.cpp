#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int node=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[left]>arr[node])
    node=left;
    if(right<=n && arr[right]>arr[node])
    node=right;
    if(node!=i)
    {
        swap(arr[node],arr[i]);
        heapify(arr,n,node);
    }
}
void buildheap(int arr[],int n)
{
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    buildheap(arr,n);
    for(int i=n;i>1;i--)
    {
        swap(arr[i],arr[1]);
        heapify(arr,i-1,1);

    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}