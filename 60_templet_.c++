
 // it is generaly constructor now after  38 line the use tamplet is use
/* #include<iostream>
using namespace std;

 class vector{
     public:
     int * arr;
     int size;
      vector(int m){
          size = m;
          arr = new int[size];

      }
      int dotproduct(vector v1){
          int d= 0;
          for(int i=0;i<size;i++){
         d += this->arr[i] * v1.arr[i] ;

          }
         return d;
      }

 };
int main()
{ vector v1(2);
v1.arr[0] = 2;
v1.arr[1] = 4;

  vector v2(2);
v2.arr[0] = 0;
v2.arr[1] = 4;
// here out will come after mulitiplication of 2*0+4*4=16
    
    int a = v1.dotproduct(v2);
    cout<<a<<endl;
return 0;
} */  
#include<iostream>
using namespace std;
template <class T> // templet decleration now inside of int we write the t
 class vector{
     public:
     T* arr; // place of int*arr we use T *arr  // costum array
     int size;
      vector(int m){
          size = m;
          arr = new T[size];  // T place of int

      }
      T dotproduct(vector v1){
          T d= 0;
          for(int i=0;i<size;i++){
         d += this->arr[i] * v1.arr[i] ;

          }
         return d;
      }

 };
int main()
{ vector<float> v1(2);   // comand to insted of T what i want like chae float doule etc write < in arrow>
v1.arr[0] = 2.4;
v1.arr[1] = 4.6;

  vector <float>v2(2);   // comand to insted of T what i want like chae float doule etc write < in arrow>s
v2.arr[0] = 0.90;
v2.arr[1] = 4.12;
// here out will come after mulitiplication of 2*0+4*4=16
    
    float a = v1.dotproduct(v2);
    cout<<a<<endl;
return 0;
}