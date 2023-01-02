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
        while(space<=i-1)
        {
            cout<<" ";
            space++;
        }
        int k=i;
        int j=1;
        while(j<=n-i+1)
        {
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}