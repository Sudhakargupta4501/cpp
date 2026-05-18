#include<iostream>
using namespace std;
/* syntex for initiligation list nin constructoer:
construor (argunment -list) : initilization -section
{
    assignmentn + other code ;
}
  EXAMPLE
class test{
    int a ;
    int b; public :
    test(int i ,int j) : a(i),  b(j){constructor body}
    
};

*/
   
class test{
    int a ;
    int b; 
    public :
   // test(int i ,int j) : a(i),  b(i * j)
    //test(int i ,int j) : a(i),  b(2 * j)
  //  test(int i ,int j) : a(i),  b(a / j)
    // test(int i ,int j) : a(i),  b(a * j)
   // test(int i ,int j) : b(i) , a(i* j)      // order should be change her so it give the arbage value
    // because in private mode we initilize a first
    test(int i ,int j) : b(i) , a(i* j)  // now we chane the position of a and b it should be run
    {
        cout<<"the constructor initilization"<<endl;
        cout<<"the value of b is ="<<b<<endl;
        cout<<"the value of a is ="<<a<<endl;
        }
    
};
 
int main()
{
     test t(6 ,4);
return 0;
}