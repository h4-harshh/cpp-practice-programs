// PROGRAM TO FIND THE FIBONACCI SERIES nth term

#include<iostream>
using namespace std;

int fibonacci(int n) {
    int a=0,b=1;
    if(n==0){cout<<"0";}
    
    int i=1;
    int sum=0;
    while(i<n){
        sum=a+b;
        a=b;
        b=sum;
        i++;
    }
    

    return sum;
}
int main()
{
    int n;
    cout<<" Enter the value of n " <<endl;
    cin>>n;

    int ans=fibonacci(n);
    cout<<ans<<endl;

    return 0;
}