#include<iostream>
using namespace std;

int main()
{
    int a,b,rem,lcm;
cout<<"plz enter any no"<<endl;
cin>>a;
cout<<"plz enter any no"<<endl;
cin>>b;
while(true){
    lcm=a;  // assigne the bigger no into lcm 
    rem=a%b;
    if(rem==0){
        break;
    }
    a=a*2;   // biger no output will give the answer 

}
cout<<"lcm is "<<lcm<<endl;

return 0;
}