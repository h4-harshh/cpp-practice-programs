// program to count the number of notes
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter the value of n "<<endl;
    cin>>n;
    int n100,n50,n20,n1;
    n100=n50=n20=n1;



    switch(n>=100)
    {
        case 1:
        n100=n/100;
        n=n%100;
        break;

        default: 
        n100=0;
    }
    switch(n>=50)
    {
        case 1:
        cout<<n;
        n50=n/50;
        n=n%50;
        break;

        default: 
        n50=0;

    }
    switch(n>=20)
    {
        case 1:
        n20=n/20;
        n=n%20;
        break;

        default: 
        n20=0;
    }
    switch(n>=1)
    {
        case 1:
        n1=n/1;
        n=n%100;
        break;

        default: 
        n1=0;
    }

    cout<<" n100="<<n100<<endl;
    cout<<" n50="<<n50<<endl;
    cout<<" n20="<<n20<<endl;
    cout<<" n1="<<n1<<endl;
    return 0;
}