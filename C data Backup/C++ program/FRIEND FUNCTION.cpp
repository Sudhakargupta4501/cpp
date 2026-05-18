#include <iostream>
using namespace std;
// forward decleration
class complex;
class calci
		  {
		  	public:
		  		int add(int a, int b){
		  			return (a+b);
				  }
		   int sumcalci(complex , complex );
		   	
		   	
		   
		  };
		  	
		  	class complex{
			  
		  	
	//int a,b ;
	friend int calci :: sumcomcalci(complex,complex);
    friend int calci :: sumcalci(complex o1,complex o2);
	
    // to make more calci funcion we use or set as a class whole as a friend 
    //to any one can access means friend class
     public:
	
	 	void setdata(int v1, int v2){
	 		a= v1; b= v2;
		 }
		 void displaydata(){
		 	cout<<"your complex no is"<<a<<"+"<<b<<"i"<<endl;
		 }
		 };
		 
		  int calci :: sumcalci(complex o1,complex o2){
		  	return (o1.a+o1.b);
		  }
           int calci :: sumcomcalci(complex ,complex )
           {
		  	return (o1.b+o2.b);
		  }
		  int main(){
		  	complex o1,o2;
		  	o1.setdata(1,5);
		  	o2.setdata(4,6);
              calci cal;
             int res  = cal.sumcalci(o1,o2);
              cout<<"the sum of the part of the class"<<res<<endl;
			 
             int result = cal.sumcomcalci(o1,o2);
              cout<<"the sum of the part of the class"<<result<<endl;
			 // sumcalci()
              return 0;
		  }
		  