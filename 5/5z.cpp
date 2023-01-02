//LEET CODE QUESTION 1


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,sum=0,fact=1;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     while(n!=0)
//     {
//         int r=n%10;
//         fact=fact*r;
//         sum=sum+r;
//         n=n/10;
//     }
//     cout<<fact-sum<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

class solution
{
    int differenceofproductandsum(int n)
    {
        int product=1;
        int sum=0;

        while(n!=0)
        {
            int rem=n%10;
            product=product*rem;
            sum=sum+rem;
            n=n/10;
        }

        int answer=product-sum;
        cout<<answer<<endl;
        // return answer;


    }
};