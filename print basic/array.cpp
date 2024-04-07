#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"enter ten number";
    for(i=0;i<=9;i++)
    {
    cin>>a[i];
    sum=sum+a[i];
    }
    cout<<"sum of 10 number "<<sum;
    return 0;
}