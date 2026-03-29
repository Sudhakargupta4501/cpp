#include<iostream>
using namespace std;
/*
case1:
class b : public a{
    // order of execution of constructor --> first a{}then b()
    // first constructer execute for base class
    };
    case 2:
    class a : public b, public c{
        // order of execuation constructon -->first
        // first B() then C() then A();
    } ;
    case 3:
    class a: public b , virtual public c{
        // order of execution of constructor -->  
        // first virtual execute then C()  then B () then A()    ]
        };
        */
class base1{
int data1;
public :
base1(int i){
    data1 =i;
    cout<<"base1 class constructor called"<<endl;
}
void displaydata1(void){
    cout<<"the value of data is"<<data1<<endl;

}

};
class base2
{
int data2;
public :
base2(int i){
    data2 =i;
    cout<<"base2 class constructor called"<<endl;
}
void displaydata2(void){
    cout<<"the value of data is"<<data2<<endl;

}

};

class derived :public base2 , public base1 {
    // here if base1  print first and base 2 print second  if we 
    // change the position of the base 1 and base 2 the output will be change 
    
    int der1;
    int der2;
    public :
    derived(int a, int b , int c ,int d): base1(a),base2(b){ // constructor derived class
   der1 = c;
   der2 = d ;
   cout<<"derived class constructor called"<<endl;
    }
    void displaydataderived(void){
        cout<<"the value of der 1 is ="<<der1<<endl;
        cout<<"the value of der 2 is ="<<der2<<endl;
    }
};

int main()
{  derived siddhu(12,45,67,89);
 siddhu.displaydata1();
siddhu.displaydata2();
    siddhu.displaydataderived();
return 0;
}