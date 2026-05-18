#include<iostream>
using namespace std;
inline sum(int a,int b)
{
	static int c;  // in line function coding for output 25,26,27,28,29
	c=0;
	c=c+1;
	return a*b+c; 
}
int main(){ 
int a,b;
	cout<<"plz enter any no"<<endl;
	cin>>a;
	cout<<"plz enter any no"<<endl;
	cin>>b;
	cout<<"the sum of the ="<<sum(a,b)<<endl;
	cout<<"the sum of the ="<<sum(a,b)<<endl;
	cout<<"the sum of the ="<<sum(a,b)<<endl;
	cout<<"the sum of the ="<<sum(a,b)<<endl;
	cout<<"the sum of the ="<<sum(a,b)<<endl;
		return 0;
}