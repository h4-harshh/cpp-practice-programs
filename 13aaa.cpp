#include<iostream>
using namespace std;

int first(int a[],int n,int k)
{
    int start=0;
    int end=n-1;
    int mid,ans;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(k==a[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(k<a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int last(int a[],int n,int k)
{
    int start=0;
    int end=n-1;
    int mid,ans;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(k==a[mid]){
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
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter the key whose occurence u want to know"<<endl;
    cin>>k;
    int f=first(a,n,k);
    int l=last(a,n,k);
    cout<<f<<endl;
    cout<<l<<endl;


}