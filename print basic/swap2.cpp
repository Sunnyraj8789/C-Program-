#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two number:"<<endl;
    cin>>a>>b;
    b=a+b-(a=b);
    cout<<"  a="<<a<<endl<<"  b= "<<b;
    return 0;

}