// intersection for sorted arrays

#include<iostream>
using namespace std;

void insert_array(int arr[],int size)
{
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int a[50];
    int b[50];
    int sa,sb;

    cout<<"Enter the size of the array "<<endl;
    cin>>sa;
    cout<<" Enter the size of the second array"<<endl;
    cin>>sb;

    insert_array(a,sa);
    insert_array(b,sb);
    
    int i=0,j=0;
    while(i<sa && j<sb)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<< " ";
            i++;
            j++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    return 0;
}