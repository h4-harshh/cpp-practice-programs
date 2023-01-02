#include<iostream>
using namespace std;
int firstocc(int a[],int n,int k){
    int start=0;
    int end=n-1;
    int ans1,mid;
    mid=start+end/2;
    while(start<=end)
    {
        if(k==a[mid])
        {
            ans1=mid;
            end=mid-1;
        }
        else if(k<a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+end/2;
    }
    // cout<<ans1;
    return ans1;
}
int lastocc(int a[],int n,int k){
    int start=0;
    int end=n-1;
    int ans2,mid;
    mid=start+end/2;
    while(start<=end)
    {
        if(k==a[mid])
        {
            ans2=mid;
            start=mid+1;
        }
        else if(k<a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+end/2;
    }
    // cout<<ans2;
    return ans2;
}
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
    cout<<firstocc(a,n,k)<<" "<<lastocc(a,n,k)<<endl;
    // int f=firstocc(a,n,k);
    // int l=lastocc(a,n,k);
    // cout<<"firstoccurance="<<f<<endl;
    // cout<<"lastoccurance="<<l;
    return 0;
}