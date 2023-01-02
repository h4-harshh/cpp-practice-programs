// to find the nth element of an AP

#include<iostream>
using namespace std;

int nthtermis()
{
    int a,d,n;

    cout<<" Enter the value of first element of the AP "<<endl;
    cin>>a;

    cout<<" Enter the common differernce of the AP " << endl;
    cin>>d;

    cout<< " ENter the  value of n " <<endl;
    cin>>n;


    return (a+(n-1)*d);
}
int main()
{
    int ans=nthtermis();

    cout<<" The term at nth position is "<<ans <<endl;
    return 0;
}