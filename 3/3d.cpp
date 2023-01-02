//program for finding the input character is from a-z or A-Z or 0-9
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Input a character from the keyboard"<<endl;
    cin>>c;

    if(c>='a'&& c<='z')
    {
        cout<<"The input value lies in a-z"<<endl;
    }
    else if(c>='A'&& c<='Z')
    {
        cout<<"The input value lies in A-Z"<<endl;
    }
    else if(c>='0'&& c<='9')
    {
        cout<<"The input value lies in 0-9"<<endl;
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }

    return 0;
}