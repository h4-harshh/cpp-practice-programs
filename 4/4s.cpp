#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int star=1;
        while(star<=n-i+1)
        {
            cout<<"*";
            star++;
        }
        // int j=1;
        // while(j<=i-1)
        // {
        //     cout<<" ";
        //     j++;
        // }
        cout<<endl;
        i++;
    
    }
    return 0;
}