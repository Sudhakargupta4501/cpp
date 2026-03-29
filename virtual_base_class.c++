#include<iostream>
using namespace std;
  /*
 student --> test;
 student--> sport;
 test --> result;
 sport -- result;   */


 class student{
     protected :
     int rollno;
     public :
      void setdata(int a){ 
         rollno=a;

    }
     void getdata(){
         cout<<"you roll no is"<<rollno<<endl;
     }
 };
  
   class test : virtual public student{
       protected :
       int maths;
       int science;
        public :
        void setmarks(int m1 , int m2){
      science  =m1;
      maths =m2;
        }
        void displaymarks(void){
           cout<<"yor maths mark is ="<<maths<<endl;
			cout<<"yor science mark is ="<<science<<endl;
			}
   };

 class sport : virtual public student{
     protected :
     float score;
     public :
     void setscore(float set){
         score = set;

     }
     void displayscore(void){
         cout<<"your score is ="<<score<<endl;
     }
 };
  class result : public test , public sport{
  float total;
  public :
  void display(void){
      total = maths + science + score;
       getdata();
       displaymarks();
       displayscore();
        cout<<"your total marks is ="<<total<<endl;
  }
  };

int main()
{  result siddhu;
siddhu.setdata(80);
siddhu.setmarks( 79.6 , 87.5);
siddhu.setscore(10);
siddhu.display();
    
    return 0;
}