#include<iostream>
using namespace std;
 class student
  {
 protected  :
 int rollno;
 public :
 void setrollno(int);
 void getrollno(void);
 };
 void student :: setrollno(int r){
     rollno = r;

 }
  void student :: getrollno(){
      cout<<" roll no is"<<rollno<<endl;
  }
  
 class  exam : public student {
 protected :
 float maths;
 float science;
      public: 
      void setmarks(  float , float);
      void getmarks();

 }; 
   void exam :: setmarks( float m1 , float m2){
        maths = m1;
         science = m2;

   } 
   
    void exam :: getmarks(){
        cout<<"mark os maths is ="<<maths<<endl;
        cout<<"mark os science is ="<<science<<endl;
                        
    }
     class result : public exam{
         float percentage;
          
         public :
         void displayresult( )
		 {
             getrollno();
             getmarks();
            
      cout<<"yor percentage is = "<<(maths+science)/2<<endl;
      
         }
      };
int main()
{ result harry;
harry.setrollno(420);
harry.setmarks( 94.0 , 90.0);
  harry.displayresult();  
return 0;
}