#include<iostream>
using namespace std;
template< class T>
class siddhu {
    public :
    T data;
    siddhu( int a){
        data = a;

    }


};

int main()
{
   siddhu < int> s( 34 ) ;
   cout<<s.data<<endl;
return 0;
}