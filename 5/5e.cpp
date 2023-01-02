// FOR LOOP BASIC PROGRAMS

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number upto which you want to print the numbers"<<endl;
    cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<i<<endl;
    // }
    int i=1;
    for(; ;)
    {
        if(i<=n)
        {
            cout<<i<<endl;
            i++;
        }
        else 
        {
            break;
        }

    }
    return 0;
}