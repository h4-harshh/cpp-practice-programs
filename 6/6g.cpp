// TO CHECK WHEATHER THE ENTERED NUMBER IS EVEN OR ODD

#include<iostream>
using namespace std;

bool isEven(int a)
{
    if((a&1)==1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout<<" Enter a number to check wheather it is even or not " <<endl;
    cin>>n;

    if(isEven(n)) {
        cout<<" The number is odd "<<endl;
    }
    else{
        cout<<"The number is even "<<endl;
    }

    return 0;
}