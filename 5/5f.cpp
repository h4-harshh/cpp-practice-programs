#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n to print the number from 1-n"<<endl;
    cin>>n;
    int i=1;
    for(;;)
    {
        if(i<=n)
        {
            cout<<i<<endl;
            i++;
        }
        else{
            break;
        }
    }
}