#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=0;i<31;i++)
    {
        if((pow(2,i))==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}