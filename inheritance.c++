#include<iostream>
using namespace std;
  class calciculator{
      protected :
   int num1;
   int num2;
   //int div;
  // int ;
    public :
     void getdata(void);
     void displatdata(void);


  };
  class calciculator :: void getdata(int a, int b){
 a=num1;
 b =num2;
   }

 class calciculator::  void dispalydata(){

   cout<<"the total of no is"<<num1 + num2<<endl;
cout<<"the total of no is"<<num1 - num2<<endl;
cout<<"the total of no is"<<num1 * num2<<endl;
cout<<"the total of no is"<<num1 / nnm2<<endl;
   }
   
   class scientificcalciluter : public calciculator
   {
  protected:
 int num3;
 int num4;
 public :
  void setdata(int, int);
  void printdata(void);


   };
    void scientificcalciluter :: setdata(int c, int d){
           num3 =c;
           num4 =d;
         
    }
     void  scientificcalciluter :: printdata(){
          
          cout<<"the value of nmo is"<<num3+num4<<endl;
          cout<<"the value of nmo is"<<num3-num4<<endl;
          cout<<"the value of nmo is"<<num3*num4<<endl;
          cout<<"the value of nmo is"<<num3/num4<<endl;
     }

int main()
{
    
return 0;
}