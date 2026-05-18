#include<iostream>
using namespace std;
 inline int sum(int a,int b)
 {
 static int c=0;
   c = c ;
   c=c+ 1;
     return a*b+c;
 }
int main()
{ 
    int a,b;
cout<<"plz enter any nol"<<endl;
cin>>a;
cout<<"plz enter any no"<<endl;
cin>>b;
cout<<"the product of and b is="<<sum(a,b)<<endl;
cout<<"the product of and b is="<<sum(a,b)<<endl;
cout<<"the product of and b is="<<sum(a,b)<<endl;
cout<<"the product of and b is="<<sum(a,b)<<endl;
cout<<"the product of and b is="<<sum(a,b)<<endl;
    
return 0;
}