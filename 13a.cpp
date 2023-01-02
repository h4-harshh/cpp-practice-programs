#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int start=0;
    int end=n-1;
    int ans;
    while(start<=end)
    {
        int mid=start+end/2;
        if(k==a[mid])
        {
            ans=mid;
            start=mid+1;
        }
        else if(k<a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans;
}