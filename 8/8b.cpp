// PROGRAM FOR FINDING different element
// the input values should be 1 to size-1

#include<iostream>
using namespace std;

int differentelement(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int a[20];
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    cout<<"Enter the elements of the arrray"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    int diff=differentelement(a,size);
    cout<<" The diffenent element is " << diff << endl;
}