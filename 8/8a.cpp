// PROGRAM FOR REVERSING OF THE ARRAY

#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    for(int i=0;i<size;i=i+2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

// void swapAlternate(int arr[], int size) {

//     for(int i = 0; i<size; i+=2 ) {
//         if(i+1 < size) {
//             swap(arr[i], arr[i+1]);
//         }
//     }

// }

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

    cout<<"Enter the elements of the arrray"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    reverse(a,size);
    printarray(a,size);
    return 0;
}






