// finding the number for which the given number is prime and for which not prime
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check for what values it is prime and for what values it does not"<<endl;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"prime for "<<i<<endl;
        }
        else
        {
            cout<<"not prime for "<<i<<endl;
        }
        i++;
    }
    return 0;
}