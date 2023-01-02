// program for calculator using cpp
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout <<" Enter the value of a"<<endl;
    cin>>a;
    cout<<" Enter the value of b "<<endl;
    cin>>b;

    cout<<" Enter the operation to be performed "<<endl;
    cin>>c;

    switch(c)
    {
        case '+': cout<<(a+b)<<endl;
            break;
        case '-': cout<<(a-b)<<endl;
            break;
        case '*': cout<<(a*b)<<endl;
            break;
        case '/': cout<<(a/b)<<endl;
            break;
        case '%': cout<<(a%b)<<endl;
            break;

        default: cout<<" Wrong choice "<<endl;
    }
    return 0;
}