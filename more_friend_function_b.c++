#include<iostream>
using namespace std;
class c2; // to give bcz complir has assure to class c2 are present somewhere
 class c1{
   int val1;
   friend void exchange(c1 &, c2 &);
   public:
   void setdata(int a){
       val1 =a;
   }  
   void getdata(void){
       cout<<"the value of val"<<val1<<endl;
   }
 };
 
 class c2{
   int val2;
   public:
   friend void exchange(c1 &, c2 &);
   void setdata(int a){
       val2 =a;
   }  
   void getdata(void){
       cout<<"the value of val"<<val2<<endl;
   }
 };
  void exchange(c1 &x, c2 &y)   
  {
      int temp =x.val1;
      x.val1=y.val2;
      y.val2=temp;
  }  // call by refrance for swape the value
int main()
{ c1 oc1;
c2 oc2;
oc1.setdata(34);
oc2.setdata(55);
  exchange(oc1,oc2);
  cout<<"the value after exchanging value"<<endl;
  oc1.getdata();
  cout<<"the value after exchanging value"<<endl;
  oc2.getdata();   
return 0;
}