// PROGRAM TO  INITIALIZE AN ARRAY WITH THE SAME VALUE

#include<iostream>
#include <stdlib.h>
using namespace std;

void printarray(int array[],int size)
{
    cout<<" The values of array are "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    //to initialize the array with the same value we can use the fill_n command as used below
    int arr[50];
    fill_n(arr,5,3);
    printarray(arr,5);
    // for (int i=0;i<=4 ;i++) {
    //         cout<<arr[i]<<" ";
    // }


    // if the values given to an array at the time of initialization is less than its  size 
    int array[5]={4,5};
    printarray(array,5);
    // for(int i=0;i<5;i++) {
    //     cout<<array[i]<< " ";
    // }

    
    return 0;
}

