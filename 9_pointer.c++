#include<iostream>
using namespace std;
int main()
{
   // it is data type which hold the value  of the variable addres
  int a=3;
 // int* b = &a;  
 int *b = &a;

int *c= *&b;
  cout<<"the address of b is"<<*b<<endl;
cout<<"the address of a is"<<&a<<endl;
cout<<"the address of c is  "<<c<<endl;
return 0;
}              