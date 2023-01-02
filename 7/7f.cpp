// PROGRAM FOR REVERSING OF THE ARRAY

#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    // int temp;
    while(start<=end)
    {
        // temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    // cout<<arr[start]<<" "<<arr[end]<<endl;
}

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int a[20];
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    reverse(a,size);
    printarray(a,size);
    return 0;
}