// program for +,neg or 0 number
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<"The entered number is positive"<<endl;
    }
    else if(a<0)
    {
        cout<<"The entered number is negative"<<endl;
    }
    else
    {
        cout<<"The entered number is zero"<<endl;
    }
    return 0;
}