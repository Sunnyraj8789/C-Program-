#include<stdio.h>
int main()
{
   
}
 
 class complex
 {
    private:
       int a,b;
    public:
       void setdata(int x,int y);
       void getdata();
       complex add(complex);


 }

 void complex::setdata(int x,int y)
 {
    a=x;
    b=y;

 }

 void complex::getdata()
 {
    cout<<"\na"=<<a<<"\nb"=<<b;
 }
 
complex complex::complex(complex c)
{

}