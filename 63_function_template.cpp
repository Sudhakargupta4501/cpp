
#include<iostream>
using namespace std;
template<class T>
void swapp(T &a , T &b){
   T temp = a;
   a=b;
   b = temp;


}
template< class T1 , class T2>
// to make not a CLASS but to make one FUNCTION HERE
 float funcaverage( T1 a , T2 b){

    float avg = (a+b)/2.0;
   return avg;
    }
    
    int main()
{ 
    float a;
a = funcaverage(5 , 45.98);
//cout<<"The Average of the number  is "<<a<<endl;
// alternatre we use the concept of c
   //printf( "the value of the no is %f" ,a);
  int x = 5;
   int y = 6;
   swapp( x , y);
   cout<<x<<endl;
   cout<<y<<endl;

return 0;
}