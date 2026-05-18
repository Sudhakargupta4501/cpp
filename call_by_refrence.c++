#include<iostream>
using namespace std;
 swapepoint(int &a, int &b)
 {
     int temp=a;
     a=b;
     b=temp;

 }
int main()
{  

int x=20,y=14;
cout<<"the value of a="<<x<<"  and b"<<y<<endl;
swapepoint(x,y);
cout<<"the value of a="<<x<<"  and b"<<y<<endl;
return 0;
}