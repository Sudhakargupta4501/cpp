#include<iostream>
using namespace std;
//here pointerswap is used to swep the address of the variable 
    int swappoint(int* a,int* b){
        int temp=*a;
        *a=*b;
        *b=temp;   
    }
int main()
{int y=5,x=4;
     cout<<"the value of a "<<x<<" the value is b="<<y<<endl;
    // swap(a,b); // here swep is not us  swap because the not givenm the value
     swappoint(&x,&y);
 cout<<"the value of a "<<x<<"   the value is b="<<y<<endl;
 return 0;
}