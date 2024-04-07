#include<iostream>
using namesapce std;



void swap(int x ,int y)
{
    int z;
    z=x;
    x=y;
    y=z;


}

int main()
{
    int x,y,p;
    
    cout<<"enter two number";
    cin>>x>>y;
    p=swap(&x,&y);
    cout<<p;

}

