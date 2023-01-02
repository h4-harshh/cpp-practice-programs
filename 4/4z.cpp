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
        int b=1;
        while(b<=i-1)
        {
            cout<<"*";
            b++;
        }
        int c=1;
        while(c<=i-1)
        {
            cout<<"*";
            c++;
        }
        int d=n-i+1;
        while(d)
        {
            cout<<d;
            d--;
        }

        cout<<endl;
        i++;

    }
    return 0;
}