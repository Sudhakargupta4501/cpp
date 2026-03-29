#include<iostream>
using namespace std;
  class base{
      public:
      int var_base;
      void display(){
          cout<<"displaying the value of"<<var_base<<endl;

      }

      };
       class derived : public base{
           public:
           int var_derived;
           void display(){
               cout<<"displaying the class variale var_base"<<var_base<<endl;
               cout<<" display the class variable var_base"<<var_derived<<endl;

           }
       };

int main()
{
    baseclass * base_class_pointer;
    
// not full program
 

    
return 0;
}