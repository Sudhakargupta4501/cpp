#include<iostream>
using namespace std;
// constructure is a special member function  with same name as of the class
// it is autometiccally invok( called) whenever  the object of its class
// it is use to initilize the object of the class
class complex{ 
    int a,b;
    public :
    complex(int , int);  // constructure decleration
    void getdata(){
        cout<<"your no is = "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(int x , int y) // this is parametrize constructor
{
    a=x;
    b=y; 
}
int main()
{ // implect call
    complex c(4,6);
    c.getdata();   
//explict call 
    complex b = complex(2,5);
    b.getdata();
return 0;
}