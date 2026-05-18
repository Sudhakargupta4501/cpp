#include<iostream>
using namespace std;
   class employes
   {
private : 
int c,d;//they can't be call directly
public: 
int a,b; // they can be acces any where
  void setdata(int c,int d);//setdata for pravate
 void getdata() //getdata for private
 {
  cout<<"the value of c and d is"<<c<<endl;
  cout<<"the value of c and d is"<<d<<endl;
cout<<"the value of c and d is"<<a<<endl;
 cout<<"the value of c and d is"<<b<<endl; 
   } 
   };
   void employes :: setdata(int c, int d)
   {
   }
   
   int main()
{  employes siddhu;
    siddhu.a=23;
siddhu.b=567;
 
siddhu.setdata(34,56);
siddhu.getdata();
return 0;
}
