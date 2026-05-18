#include<iostream>
using namespace std;
// inheritance is a part of oops
//  property  of inheritance two
//                baseclass
//       derived class
// form class
class employee{   // base class
 public :
 int id;
    float sailary;
    employee(int inp){
        id = inp;
        sailary =34.6;
    } employee(){}
};/* /// derived class
 class {{derived-class-name }}: {{visibility-mode}} {{baseclass-name}}
 {
     class member / method/etc;
 }*/


class progremmer : public employee{
    public:
    	int language;
    progremmer(int impis){
        id =impis ;
    int language = 9;
        
    }
    void getdata(){
         cout<<"the value of  "<<id<<endl;
    }
};
int main()
{ employee harry(1) ,siddhu (2);
 cout<<harry.sailary<<endl;
 cout<<siddhu.sailary<<endl;
 progremmer skill(10);
 cout<<skill.language<<endl;;

return 0;
} 
//   private never be inherita