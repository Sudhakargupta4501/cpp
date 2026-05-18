#include<iostream>
using namespace std;
class complex{
 int a;int b;
 public:
  void setdata(int n1,int n2){
      a=n1;
      b=n2;

  }
  friend complex :: sumcomplex(complex o1, complex o2);
  void getdata(void){
      cout<<"you no is = "<<a<<"+"<<b<<"i"<<endl;
  }
  complex :: sumcomplex(complex o1, complex o2){
      complex o3;
      o3.setdata((o1.a+o1.b) , (o2.a+o2.b));
     // return o3; sum complex bahari member hai its nota a member function of the 
     //function but it have approved to use private valuue of the  functio of the class

  }

};

int main()
{ complex c1,c2;
c1.setdata(1,4);
c1.getdata();

c2.setdata(5,8);
c2.getdata();
  complex sum;
sum = sumcomplex(c1,c2); 
sum.getdata(); 
return 0;
}/*
// properties of friendfunction
1* not in the scope of the class
since it is not scope in the class it canot be called from the object of the class
kisi bhe object ko invoke karna ke liya jararu nahi haiusually contaent as a aurgument
kabhoi bhi isko likh saketa hai
it canot be access directly the member */