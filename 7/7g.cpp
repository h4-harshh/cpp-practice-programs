// 
#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
        
    }
        return 0;
}

int main()
{
    int a[30];
    int size;
    int key;


    cout<<"Enter the size of an array " << endl;
    cin>>size;



    cout<<" Enter the elements of the array "<<endl;
    for(int i=0;i<size;i++){

    cin>>a[i];
    }

    cout<<" Enter an element to search in array "<<endl;
    cin>>key;

    bool found= search(a,size,key);

    if(found) { cout<<" Key is present "<<endl;}
    else{ cout<<" Key is not present "<<endl;}

    return 0;
}