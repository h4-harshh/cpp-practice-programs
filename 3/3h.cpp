// farenheit to celsius
#include<iostream>
using namespace std;
int main()
{
    float f,c;
    cout<<"Enter the value in farenheit"<<endl;
    cin>>f;
    c=(((f-32)*5)/9);
    cout<<"The entered farenheit in celcius is: "<<c<<endl;
    return 0;
}