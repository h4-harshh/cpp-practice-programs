#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check wheather it is prime or not"<<endl;
    cin>>n;
    // int flag=0;
    // for(int i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         flag+=1;
    //         break;
    //     }
        
    // }
    // if(flag!=0)
    // {
    //     cout<<"NOT PRIME"<<endl;
    // }
    // else{
    //     cout<<"PRIME"<<endl;
    // }

    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
        }
        
    }
    if(isprime==0)
    {
        cout<<"not prime"<<endl;
    }
    else
    {
        cout<<"PRIME"<<endl;
    }
    return 0;
}