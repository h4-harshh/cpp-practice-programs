//INTERSECTION OF TWO ARRAY

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void insert_array(int arr[],int size)
{
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

int  intersection(int a[],int b[], int sa,int sb)
{
    int temp[20] , h=0;
    for(int i=0;i<sa;i++)
    {
        for(int j=0;j<sb;j++)
        {
            if(a[i]==b[j])
            {
                temp[h]=b[j];
                h++;
                b[j]=INT_MIN;
                break;
            }
    
        }
    }
    for(int k=0;k<h;k++)
    {
        cout<<temp[k]<<" ";
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
intersection(a,b,sa,sb);
    // cout<<intersection(a,b,sa,sb)<< " ";

    return 0;
}