// program to find the power


// //NORMAL PROGRAM
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<" Enter the value of number and power "<<endl;
//     cin>>a >>b;

//     int ans=1;
//     for (int i=1;i<=b;i++)
//     {
//         ans=ans*a;
//     }

//     cout<<"the value of "<<a<<  " to the power "<<b<<" is " << ans<<endl;
//     return 0;
// }

//PROGRAM USING FUNCTION

#include<iostream>
using namespace std;

int power()
{
    int a,b;
    cout<< " Enter the value of base and power " <<endl;
    cin>>a>>b;

    int ans =1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }

    return ans;
}


int main()
{
    int answer;
     answer=power();
    cout<<" The answer is "<<answer<<endl;


     answer=power();
    cout<<" The answer is "<<answer<<endl;


     answer=power();
    cout<<" The answer is "<<answer<<endl;
    return 0;
}