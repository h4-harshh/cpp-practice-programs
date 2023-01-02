// TO CHECK WHEATHER THE GIVEN NUMBERIS PRIME OR NOT
#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter a number "<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"The entered number is a prime number"<<endl;
    }
    else
    {
        cout<<"The entered number is not a prime number"<<endl;
    }
    return 0;
}