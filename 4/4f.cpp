/*

1
2 3
4 5 6
7 8 9 10

*/
#include<iostream>
using namespace std;
int main(){
// {
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<count<<" ";
//             count=count+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int count=1;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
}
}