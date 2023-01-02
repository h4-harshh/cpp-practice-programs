// sum of all even number from 1 to n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number upto which you want to print the series of numbers from 1 "<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n)
    {
        if(i%2==0){
           sum=sum+i; 
        }
        
        i++;
    }
    cout<<"the sum from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}