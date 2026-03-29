
#include<iostream>
using namespace std;
template <class T>
void swapp( T &a , T &b){
   T temp = a;
   a=b;
   b = temp;


}
// to make not a CLASS but to make one FUNCTION HERE
template< class T1 , class T2>
 float funcaverage( T1 a , T2 b){

    float avg = (a+b)/2.0;
   return avg;
    }
    
    int main()
{ 
    float a;
a = funcaverage(9 , 45.98);
//cout<<"The Average of the number  is "<<a<<endl;
// alternatre we use the concept of c
  // printf( "the value of the no is %f" ,a);
  int x = 5;
   int y = 6;
   swapp( x , y);
   cout<<x<<endl<<y;

return 0;
}