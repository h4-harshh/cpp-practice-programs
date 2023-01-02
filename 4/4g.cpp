/*


1 
2 3
3 4 5
4 5 6 7

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int k=i;
        while(j<=i)
        {
            cout<<k<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}