// PROGRAM FOR FINDING THE MAX AND MIN ELEMENT OF AN ARRAY

#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int getmax(int arr[], int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}


int getmin(int arr[], int size)
{
    // int min=INT_MAX;
    // for(int i=0;i<size;i++)
    // {
    //     if(min>arr[i])
    //     min=arr[i];
    // }
    // return min;

    int mini=INT_MAX;
    for(int i=0;i<size;i++)
    min(mini,arr[i]);
}



int main()
{
    int arr[20],size;
    cout<<"Enter the size of an array "<<endl;
    cin>>size;
    cout<<"Enter the elements of the arrray"<<endl;

    for(int i=0;i<size;i++) { cin>>arr[i]; }

    // int max=arr[0],min=arr[0];
    // for(int i=1;i<size;i++) {
    //     if(max<arr[i])
    //     max=arr[i];

    //     if(min>arr[i])
    //     min=arr[i];
    // }

    // cout<<" The maximum element is " << max <<endl;
    // cout<<" The manimum element is " << min <<endl;

    cout<<"Maximum element is " <<getmax(arr,size)<<endl;
    cout<<"Manimum element is " <<getmin(arr,size)<<endl;

    return 0;
}