#include<iostream>
using namespace std;
class simple{
int data1;
int data2; 
int data3;
public:
simple(int a,int b=3, int c=56){
    data1=a;
    data2=b;
data3=c;
}
void getdata()
{
    cout<<"the value is of data ="<<data1<<","<<data2<<" and "<<data3<<endl;
}
};
int main()
{
  simple a(12);
  a.getdata();

return 0;
}