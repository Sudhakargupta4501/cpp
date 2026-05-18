#include<iostream>
#include<string>
using namespace std;
class binary{
    private :
void ser_bin(void); //here we dont use the search bin directly bcz it is private
   string s;
    public :
    void read(void);
//void ser_bin(void);
} ;
 void binary :: read(void){
     cout<<"enter the string"<<endl;
     cin>>s;

 }   void binary :: ser_bin(void){
     for( int i=0;i < s.length();i++)
     {
         if(s.at(i)!='o' && s.at(i)!='1'){
             cout<<"enter binary formate"<<endl;
             exist(s)
             {
                 cout<<"it is not a binary no"<<endl;
             }
         }
     }
 }// function ke ander fuction hota hai  usko 
int main()
{
binary b;
b.read();
//b.ser_bin();
return 0;
}