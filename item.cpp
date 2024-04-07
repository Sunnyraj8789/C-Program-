#include<iostream>
using namespace std;
class item
{
    private:
       int a,b;
       static int k;
    public:
       void set_a(int x) {a=x;}
       void set_b(int y) {b=y;}
       int get_a() {return a;} 
       int get_b() {return b;}    
       void set_k(int m) {k=m;}
       int get_k()    {return k;}               


};
int item::k;

int main()
{
    item i1,i2;
    //i1.set_a(5);
    i1.set_k(10);
    cout<<i1.get_k()<<endl;
   // i1.set_k(6);
    //cout<<i2.get_k()<<endl;
    return 0;
}

