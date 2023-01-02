#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    int k='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<char(k);
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}