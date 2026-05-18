#include<iostream>
using namespace std;
    int money2(int rupee, float fact = 1){
         int rupees= rupee*fact*1.08;

    }
int main()
{
int money=100080;
//float fact =  1;
cout<<"the value of money ids"<<money<<"intrest of th "<<money2(money)<<endl;

return 0;
}