#include<iostream>
using namespace std;
class employee{
 int id;
 int sailary;
 public:
 void setid(void){
     sailary=1222;
     cout<<"plz enter your id"<<endl;
     cin>>id;

 }
 void getid(void){
     cout<<"the employee id is "<<id<<endl;

 }

};
int main()
{ /*employee siddhu,nitu,ritu,om;  
 the out for common set one id  give the output one id
siddhu.setid();
siddhu.getid();*/
    employee facebook[4];
   for(int i=0;i<4;i++)
   {
       //12
       facebook[i].getid();
       facebook[i].setid();
      // facebook[i].setid();
   }
return 0;
}