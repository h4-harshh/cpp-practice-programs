// to print values from 1 to a particular number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number upto which you want to print the series of numbers from 1 "<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"the sum from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}


/*


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number upto which you want to print the series of numbers from 1 "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}


*/