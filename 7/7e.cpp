// REVERSING AN ARRAY

#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    cout<<arr[i]<<" ";
}

int main()
{
    int a[20];
    int size ;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;

    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    reverse(a,size);
    return 0;
}