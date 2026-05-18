            // RUN TIME POLYMORPHISUM
#include<iostream>
using namespace std;
class baseclass{
public:
int var1_base;
void display(){
    cout<<"displaying base class value = "<<var1_base<<endl;
}

};
class derivedclass : public baseclass{
public:
int var1_derived;
void display(){
    cout<<"displaying base class value = "<<var1_base<<endl;
    cout<<"displaying base class value = "<<var1_derived<<endl;
}


};
int main()
{
    baseclass * base_class_pointer;  // here we make the pointer for base class
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var1_base = 45;
    base_class_pointer->display();
  //  base_class_poniter->derived = 134;
   //this will show the error
    // display function BASE CLASS ka RUN HOGA
    // this is late binding of program
    derivedclass * derived_class_pointer; // here we make the pointer for derived class
    derived_class_pointer  = &obj_derived;
    derived_class_pointer->var1_derived = 98;
    derived_class_pointer->display();
    // here we decide when this progarm will run 
    //in this program  we decide at the end or run time which one is execute
    // this is known as RUN TIME POLYMORPHISUM
return 0;
}