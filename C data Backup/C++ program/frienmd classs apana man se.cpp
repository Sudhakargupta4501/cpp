#include <iostream>  // declare all the calci function se as to aspprove to use private 
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
			  
		  	
	int a,b ;
	//friend int calci :: sumcalci(complex,complex);
    //friend int calci :: sumcomcalci(complex ,complex);
	friend class cali;
	 public:
	
	 	void setdata(int v1, int v2){
	 		a= v1; b= v2;
		 }
		 void displaydata(){
		 	cout<<"your complex no is"<<a<<"+"<<b<<"i"<<endl;
		 }
		 };
		  int calci :: sumcalci(complex o1,complex o2){
		  	return (o1.a+o2.a);
		  }
		  int calci :: sumcomcalci(complex o1,complex o2){
		  	return (o1.b+o2.b);
		  }
		  int main(){
		  	complex o1,o2;
		  	o1.setdata(1,5);
		  //	o1.displaydata();
		  //	o2.setdata(4,8);
		  	//o2.dispalydata();
			  calci calculator;
			  int res =  calculator.sumcalci(o1,o2);
			  cout<<"the value is"<<res<<endl;	o2.setdata(4,8);
			  int result = calculator.sumcomcalci(o1,o2); 
			  cout<<"the value is"<<result<<endl;
			  return 0;
		  }
		  