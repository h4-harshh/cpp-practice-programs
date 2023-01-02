//program to print the characters of an array

#include<iostream>
using namespace std;

void print(char a[],int size)
{
    for(int i=0;i<size;i++) {
        cout<<a[i]<<" ";
    }
}

int main()
{
    char ch[5]={'a','b','c','d','e'};
    print(ch,5);
    return 0;
}