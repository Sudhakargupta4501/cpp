#include<iostream>
using namespace std;
template<class T1 = int , class T2 = float , class T3 = char>
class siddhu{
    public:
    T1 a;
    T2 b;
    T3 c;
    siddhu( T1 x , T2 y , T3 z){
        a = x;
        b = y;
        c = z;

    }
    void display(){
        cout<<"the value of a is = "<<a<<endl;
        cout<<"the value of b is = "<<b<<endl;
        cout<<"the value of c is = "<<c<<endl;


    }
};
int main()
{ siddhu <> s( 23 , 45.78 , 's');  // one emplty bracket should be confermed it will give the out put
s.display();
 cout<<"concept of defalt parameter decleare here"<<endl;
    siddhu < float , double , char> i( 23.89 , 45.789 , 's'); 
    i.display(); 
return 0;
}