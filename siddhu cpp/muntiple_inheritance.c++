#include<iostream>
using namespace std;

// syntex for the multiple inheritance 2 baap 1 beta

 /*class derive : visibility-mode baase1: visibility-mode baase2;
 {
     class body of class derivd
 };*/
 class base1{
      protected :
      int base1int ;
public:
 void  setbase1int(int a){
     base1int =a ;
 }

 };
 class base2{
      protected :
      int base2int ;
public:
 void  setbase2int(int b){
     base2int = b;
 }
 }; 
 
 class base3{
      protected :
      int base3int ;
public:
 void  setbase3int(int C){
     base3int = C;
 }
 };

class derived : public base1 , public base2 , public base3 {
    public :
     void show(){
         cout<<"the value of the base1 is "<<base1int<<endl;
         cout<<"the value of the base2 is "<<base2int<<endl;
         cout<<"the value of the base3 is "<<base3int<<endl;
         cout<<"the sum of the basde 1 and 2 and 3 is "<<base2int + base1int + base3int<<endl;
     }
};

int main()
{  derived siddhu;
siddhu.setbase1int(23);
siddhu.setbase2int(45);
siddhu.setbase3int(45);
siddhu.show();
    
return 0;
}