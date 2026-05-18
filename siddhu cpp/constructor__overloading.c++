#include<iostream>
using namespace std;
//constucture overloaduing
class complex{
 int x;
 int y;
 public:
 complex(int a, int b)
 {
 x=a;
  y=b;
  }
  complex(int a){
      x=a;
      y=0;
  }
  complex()
  {
      x=0;
      y=0;
  }
 void getdata(){
     cout<<"the value of"<<x<<"+"<<y<<"i"<<endl;
 } 
};// we can create many constructure it's iknown 
//as constructure overloading
int main()
{
     complex z1(12,4);
     z1.getdata();
     complex z2(2);
     z2.getdata();
     complex z3(0,0);
     z3.getdata();
return 0;
}