#include<iostream>
using namespace std;
class ram{
private: int a;
int b;
public :
	ram(void);
	void getdata(){
		cout<<"your no is"<<a<<"+"<<b<<"i"<<endl;
		
	}
};
ram :: ram(void)  // this is a defalt constructuctior because itr ha no argument
{
	a=2;
	b=12;
	cout<<"hello world"<<endl;// hel we can print any thing it should be run
	cout<<"siddhu u can print any thing i"<<endl;
}
int main(){
	ram c;
	c.getdata();
		return 0;
}
//propetrties
// it should e declered in the public section of class
//  they ar autometically invoke whenever the object is created
// they canot return value and they do not have return type
// we can't refer to their address 
//it can have defalt argument*/