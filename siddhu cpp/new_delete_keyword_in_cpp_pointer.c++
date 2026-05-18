#include<iostream>
using namespace std;

int main()
{
    int a =4;
    int b= 12;
    int *ptr = &a;
    // new keyword
    int *p = new int(45);
    float *k = new float (34.8 );
    cout<<"the vale of a is "<<a<<endl;
    cout<<"the  address of a is"<<ptr<<endl;
   cout<<"the new key initilize is 45 is ="<<*p<<endl;
    cout<<"the valure of new int  k is "<<*k<<endl;
    
    int *arr = new int [3];
    arr[0] =10;
    arr[1] =10;
    arr[2] =10;
    delete[] arr;  
     // operator use to delete
      cout <<"the value of arr[0] is ="<<arr[0]<<endl;
      cout <<"the value of arr[0] is ="<<arr[1]<<endl;
      cout <<"the value of arr[0] is ="<<arr[2]<<endl;
        // delete keyword or opeerator
        
    
return 0;
}