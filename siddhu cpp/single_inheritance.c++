#include<iostream>
using namespace std;
 class base{
int data1; // it cant be inherita it can't be accesss
 public:
 int data2;
   void setdata();
   int getdata1();
   int getdata2();
 };
  void base :: setdata(void){
      data1 =10;
      data2 =14;
  }
    int base :: getdata1(){   // permisson to ge tha private data1 to access
    
        return data1;
    }
    
    int  base :: getdata2(){
        return data2;
    }
   class derived : public base
   {  ///it can be derived pubalically
   int data3;
   public:
    void process();
    void display();

   };
   void derived ::process(){
       data3 = getdata1()*data2; //anywhere  data1 where not be used directly because it is a private mode
       // it can be access with use withe the help of the GETDATA FUNCTION
       // 1
   }
   void derived :: display(){
       cout<< "the value of data 1"<<getdata1()<<endl;
cout<<data2<<endl;
cout<< data3<<endl;

   }
int main()
{ derived der;
der.setdata();
     der.process();
     der.display();
return 0;
}