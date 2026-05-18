#include<iostream>
using namespace std;
class complex{
    int real;
    int comp;
    public :
    void setdata(int a , int b){
        real = a;
        comp = b;
    }
    void getdata(){
        cout<<"the value of real no is ="<<real<<endl;
        cout<<"the value of complex no is ="<<comp<<endl;
    }
};

int main()
{
 complex c1;
  c1.setdata(12 ,54);
  c1.getdata();
/* complex *ptr =&c1;  // here we use the with the help of pointer
        (*ptr).setdata(13 , 45);        // it will also show the output
        
        
      (*ptr).getdata();    */

   complex *ptr = new complex;  // new operator is use
 /*
   (*ptr).setdata(11 , 44);
   
   (*ptr).getdata();        // it will also show the output
                         */
//complex ptr;
    ptr->setdata(12,43);  // it iis arrow
       // ptr arrow means it ponit to the setdata to run
    ptr->getdata(); 


    //array of object                          
    
return 0;
}
