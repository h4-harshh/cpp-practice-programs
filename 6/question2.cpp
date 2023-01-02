// Number of set bit

#include<iostream>
using namespace std;


int setbit(int a,int b) {

    int count1=0;
    int count2=0;
    while(a!=0){
    if(a&1==1)
    {
        count1++;
    }
    // else{count1=count1;}
        a=a>>1;
    }

    while(b!=0){
    if(b&1==1)
    {
        count2++;
    }
    // else{count2=count2;}
        b=b>>1;
    }

    return (count1+count2);
}

int main()
{
    int a,b;
    cout<<" Enter the value of a "<<endl;
    cin>>a;

    cout<<" Enter the value of b " <<endl;
    cin>>b;

    int ans=setbit(a,b);
    cout<<ans;
    return 0;
}