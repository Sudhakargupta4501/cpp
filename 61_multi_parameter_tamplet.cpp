            //class templete with multiple parameter class t1,tclass t2 sepearted with coma
#include<iostream>
using namespace std;
template< class T1, class T2>
class myclass{
    public :
     T1 data1 ;
     T2 data2;
     myclass(T1 a, T2 b){
         data1 =a;
         data2 =b;
     }
     void display()
	     {
        cout<<data1<<" "<<data2<<endl;
     }
};   // this above class templete is for many class we can use t1,t2, t3 and prepate many templte for many key word

int main()
{ myclass<int , char>  obj( 11,'S');
obj.display();    
return 0;
}