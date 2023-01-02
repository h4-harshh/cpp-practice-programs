// TOTAL NUMBER OF OCCURANCE


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
    int arr[11]={1,2,3,3,3,3,3,3,3,3,5};
    
    int index1=firstOccurance(arr,11,3);
    // cout<<"the index of first occurance of 3 is "<<index1<<endl;

    int index2=lastOccurance(arr,11,3);
    // cout<<"the index of first occurance of 3 is "<<index2<<endl;
    cout<<((index2-index1)+1)<<endl;


    return 0;
}