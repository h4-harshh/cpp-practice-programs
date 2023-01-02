#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int k=1;
    int i=1;
    while(i<=n)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i)
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