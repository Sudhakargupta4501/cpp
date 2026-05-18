                        //this pointer
#include<iostream>
using namespace std;
 class A{
     int a;
     public :
     void setdata (int a){
                this->a = a;
       /* A& setdata(int a);
                return *this   // here use for return the value of the object*/

                // here we use the same member a =a  the a point to the a
        // this is a pointer vo point karta hai object ko
         // this pointe is use ita ia key word which is a pointer which point to the object
        //which is being is create or which can be invoke
         //it can use to return the value so we write return this
     }

     void getdata(){
         cout<<"the value of a is ="<<a<<endl;
     }
 };
int main()
{
    A a;
    a.setdata(4);
    a.getdata();
return 0;
}