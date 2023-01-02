// FIRST AND LAST OCCURANCE OF ELEMENT

#include<iostream>
using namespace std;

int firstOccurance(int a[],int n,int key){ 

    int start=0; int end=n-1,ans;
    while(start<=end)
    {
        int mid=start + (end - start)/2;
        
        if(a[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}



int lastOccurance(int a[],int n,int key){ 

    int start=0; int end=n-1,ans;
    while(start<=end)
    {
        int mid=start + (end - start)/2;
        
        if(a[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}




int main()
{
    int arr[5]={1,2,3,3,5};
    
    int index1=firstOccurance(arr,5,3);
    cout<<"the index of first occurance of 3 is "<<index1<<endl;

    int index2=lastOccurance(arr,5,3);
    cout<<"the index of first occurance of 3 is "<<index2<<endl;


    return 0;
}