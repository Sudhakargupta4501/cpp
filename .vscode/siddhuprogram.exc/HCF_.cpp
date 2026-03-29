#include<iostream>
using namespace std;

int main()
{ int a,b,r,hcf;
cout<<"plz enter any no"<<endl;
cin>>a;
cout<<"plz enter any no"<<endl;
cin>>b;
while(true){
    r=a%b;
    a=b;
    b=r;
    if(b==0){
        break;
    }


}
cout<<"hcf is :"<<hcf;

    
return 0;
}