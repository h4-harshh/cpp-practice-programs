//program for binary search using function

#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    // int mid=(start+end)/2;
        int mid = start + (end- start)/2;


    while(start <= end)
    {
        if(key==arr[mid])
        {
            return mid;
        }

        else if(key < arr[mid])
        {
            end=mid-1;
        }
        else 
        {
            start=mid+1;
        }

        // mid=(start+end)/2;
    mid = start + (end- start)/2;

    }
return -1;

}




int main()
{
    int even[6]={3,4,7,9,12,33};
    int odd[5]={2,6,12,16,35};

    int index1=binarysearch(even,6,9);
    int index2=binarysearch(odd,5,12);

    cout<<"index of 9 is "<<index1<<endl;
    cout<<"index of 12 is "<<index2<<endl;


    return 0;
}