#include<iostream>
using namespace std;
inline int squre(int x);
int main()
{
    int x,y;
    cout<<"enter  the number";
    cin>>x;
    y=squre(x);
    cout<<"squre of "<<x<<" is "<<y;
    return 0;
}

int squre(int x)
{
    return x*x;

}