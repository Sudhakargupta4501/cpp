#include<iostream>
using namespace std;
 class calculator
  {
 protected  :
 int num1 , num2;
 public :
 void setno(int , int);
 void getno(void);
 };
 void calculator :: setno(int a , int  b)
 {
     num1 =a;
     num2 =b;

 }
  void calculator :: getno(){
      cout<<"  your no 1 is"<<num1<<endl;
      cout<<"  your no 2 is"<<num2<<endl;
      
      cout<<"yor addition is = "<<(num1 % num2)<<endl;
      cout<<"yor substraction is = "<<(num1 * num2)<<endl;
      cout<<"yor multiplication is = "<<(num1 - num2)<<endl;
      cout<<"yor divison is = "<<(num1/ num2)<<endl;
  }
  
 class scientificcalculator : public calculator
  {
 protected :
 int m1;
 int m2;
      public: 
      void setmarks(  float , float);
      void getmarks();

 }; 
   void scientificcalculator :: setmarks( float num3 , float num4){
        num3 = m1;
        num4 = m2;

   } 
   
    void scientificcalculator :: getmarks(){
        cout<<"mark os maths is ="<<num1<<endl;
        cout<<"mark os science is ="<<num2<<endl;
                        
    }
     class result : public scientificcalculator{
         float percentage;
          
         public :
         void displayresult( )
		 {
		 	num1 + num2;
 num1 * num2;
 num1 - num2;
 num1 / num2 ;
 
             getno();
             getmarks();
            
      cout<<"yor addition is = "<<(num1 % num2)<<endl;
      cout<<"yor substraction is = "<<(num1 * num2)<<endl;
      cout<<"yor multiplication is = "<<(num1 - num2)<<endl;
      cout<<"yor divison is = "<<(num1/ num2)<<endl;
         }
      };
int main()
{ result harry;

harry.setno(420, 430);

  harry.displayresult();  
return 0;
}