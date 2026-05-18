#include<iostream>
using namespace std;
//forward decleration
class complex;
class calculator
 {
public:
int add(int a, int b){
    return (a+b);
}
   int sumcalculator(complex , complex);
 };

class complex{
    int a;
    int b;
    friend int complex :: sumcalculator( complex , complex );
 public:
 void setdata(int v1, int v2){
     a=v1;
     b=v2;


 } 
 void getdata(){
     cout<<"you complex no is "<<a<<"+"<<b<<"i"<<endl;

 }
};
 int  calculator :: sumcalculator( complex o1, complex o2){
     return (o1.a + o2.a);

 }

 int main()
{
    
return 0;
}