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
        int a=1;
        while(a<=n-i+1)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}