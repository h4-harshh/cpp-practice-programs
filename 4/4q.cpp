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
        int j=1;
        while(j<=n)
        {
            cout<<char('A'+n+i+j-5);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}