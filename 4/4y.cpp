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
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }
        // int k=1;
        int j=1;
        while(j<=i)
        {
            // cout<<k;
            cout<<j;
            // k++;
            j++;
        }
        // int h=1;
        // int l=i-1;
        // while(h<=i-1)
        // {
        //     cout<<l;
        //     h++;
        //     l--;
        // }
        int l=i-1;
        while(l)
        {
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}