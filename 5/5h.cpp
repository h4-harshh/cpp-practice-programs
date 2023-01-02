#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n,sum=0;
    cout<<"Enter the value of total number you want fibonacci series"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    
}