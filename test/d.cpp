#include<iostream>
using namespace std;
class item
{
    public:
    int a,b;
    static int k;


};
int item::k;
int main()
{
    //item i1,i2;
    //i1.a=10;
    //cout<<i2.a<<endl;
    //i1.k=11;
    item::k=10;
    cout<<"k="<<item::k<<endl;


    return 0;
}