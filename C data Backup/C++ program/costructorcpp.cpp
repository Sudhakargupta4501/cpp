#include<iostream>
using namespace std;
// constructure is a special member function  with same name as of the class
// it is autometiccally invok( called) whenever  the object of its class
// it is use to initilize the object of the class
class complex{
    int a,b;
    public :
    complex(void);  // constructure decleration
    void getdata(){
        cout<<"your no is = "<<a<<"+"<<b<<"i"<<endl;
    }
};
// complex and constructor ka name same hona chaiya warna error aayega 
complex :: complex(void){
    a=10;
    b=0;
}
int main()
{ complex c1;
c.getdata();    
return 0;
}