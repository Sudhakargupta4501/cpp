#include<iostream>
using namespace std;
template< class T>
class siddhu {
    public :
    T data;
    siddhu( T a){
        data = a;

    }
    void display()
    {
        cout<<data<<endl;
    }


};
/*
// out side decleration of  display function  
template< class T>
void siddhu<T> :: display(){
    cout<<data<<endl;
}*/
 template<class T>
 void fun( int a){
     cout<<"I am  templaizd  1st "<<a<<endl;
 }
 void fun( int a){
     cout<<"I am  function 1st"<<a<<endl;
 }
 
 void fun2( int a){
     cout<<"I am  templaizd  1st "<<a<<endl;
 }
 void fun4(int b){
     cout<< " I am the 4th function"<<endl;
 }
int main()
{
   siddhu < int > s( 34 ) ;
    s.display();
 // alternate if not display function  //cout<<s.data<<endl;
  // exact match text the highest priority
 fun(4);
 fun2(5);
fun4(9);
return 0;
}