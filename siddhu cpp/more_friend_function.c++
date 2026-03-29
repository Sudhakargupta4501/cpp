#include<iostream>
using namespace std;
class y;
 class x{
     friend void add(x,y);
      int data;
      public:
      void setdata(int value){
          data =value;

      }
 };
 
 class y{
      int num;
      public:
      void setdata(int value){
          num =value;

      }
      friend void add(x,y);
 };
 void add(x o1, y o2){
     cout<<"sum of o1 of data o2 "<< o1.data + o2. num<<endl;
 }
int main()
{ x a;
a.setdata(2);
 
 y b;
 b.setdata(9);
  add (a,b);
    
return 0;
}