// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the vallue of n"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         int k='A'+i-1;
//         while(j<=i)
//         {
//             cout<<char(k);
//             k++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<char('A'+i+j-2);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}