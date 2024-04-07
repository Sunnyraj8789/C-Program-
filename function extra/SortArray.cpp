#include<iostream>
using namespace std;
int add(int x,int y,int z=1);
int main()
{
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    cout<<"sum is"<<add(a,b);
    int c;
    cout<<"enter three number"<<endl;
    cin>>a>>b>>c;
    cout<<"sum is "<<add(a,b,c);
    return 0;
    



}
float volume(int r)  // sphere
{
    return 1.33*3.14*r*r*r;

}

float volume(int r,int h) // cone
{
    0.33*3.14*r*r*h;

}

float volume(int l,int b, int h) // cuboid
{
    return l*b*h;
}
int add(int x,int y,int z)
{
    return x+y+z;
}