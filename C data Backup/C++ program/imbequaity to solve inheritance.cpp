#include<iostream>
using namespace std;
class base1 {

public :
void setdata(){
 cout<<"how are you ?"<<endl;
}

};

class base2{
    public:
     void setdata(){  
         cout<<"to kaise hai app"<<endl;
     }

};
 class derived : public base1 , public base2{

public :
void setdata(){
    base1 :: setdata();  // we say that the compiler to  if any one can ask 
    // to display the date you can base class 1 ya we can base class 2
}
 };


int main()
{ base1  base1obj;
base1obj.setdata();
base2 base2obj;
base2obj.setdata();
derived d;
d.setdata();
    
return 0;
}