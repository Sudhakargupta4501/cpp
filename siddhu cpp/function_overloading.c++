#include<iostream>
using namespace std;
    int sum(int a,int b)
    {
        return a+b;
    }
    int sum(int a,int b, int c)
    {
        return a+b+c;
    }
    int mult(int a,int b,int c)
    {
        return a*b*c;
    }
    double volume(float r,int h)
    {
        return(3.14*r*r*h);
    }
    double volume(int a)
    {
        return a*a*a;
    }
int main()
{
   cout<<"the sum of the 3,4 no is = "<<sum(3,4)<<endl; 
 cout<<"the sum of the no 3,4,7 is  ="<<sum(3,4,7)<<endl;
 cout<<"the mult of the no 24,8,2 is ="<<mult(24,8,2)<<endl;
  cout<<"the volume of  cylinder is ="<<volume(3.11,4)<<endl;
   cout<<"the volume of cube no is =c "<<volume(4)<<endl;
return 0;
}