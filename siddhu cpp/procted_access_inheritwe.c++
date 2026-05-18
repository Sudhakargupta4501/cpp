#include<iostream>
using namespace std;
  class base{
      protected :    // it's like a private but it can be inherit
      int a;
       private :
      int b;
  };
  class derived :  protected base
{


  };
int main()
{   // base b;
derived  d;

cout<<d.a<<endl;  // will not work becz base and derive class have protected mode

    
return 0;
} 
/*
                    public derivative            private derivative   protected derivative
1. public member             public              private                  protected
2. private member           not inheritance      not inheritance          not inheritance
3. protected member         protected            private                 protected
*/