#include<iostream> // when no coppy constructor is found complier sumplies its own coppy constructor
using namespace std;
class number{
    int a ;
     public:
     number(){
         a=0;
     }   // making the defalt constructor
     number (int num){
         a =num;
     }
     number(number &obj){
         cout<<"the copy constructor called"<<endl;
         a = obj.a;
     }// when no coppy constructor is found complier sumplies its own coppy constructor
     void display(){
         cout<<"the no for these object is "<<a<<endl;
     }
};
int main()
{
    number x , y , z(4) , z2 ;
    x.display();
    y.display();
    z.display();
    number z1(x);
	
	// copy constructor invoke
    z2 =z ; // copy consturctor 'can't be invoke
    z2.display();
	number z3 (z); // copy constructior invoke
	z3.display();
return 0;
}