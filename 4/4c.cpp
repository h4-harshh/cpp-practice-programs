/*
to print

123
456
789

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    int k=1;
    while(i<=n)
    {
        int j=1;
        
        while(j<=n)
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