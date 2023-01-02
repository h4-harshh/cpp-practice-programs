// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     int i=1;
//     int k=65;
//     while(i<=n)
//     {
//         int j=1;
        
//         while(j<=n)
//         {
//             cout<<char(k);
//             j++;

//         }
//         cout<<endl;
//         k++;
//         i++;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<char('A'+i-1);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}