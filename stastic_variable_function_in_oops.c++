   //stastic variabl
#include<iostream>
using namespace std;
  class employee{

    int id;
     static  int count;   // ye sirrf ek hota sara *object* share karta hai means stastic 
    public:
    void setdata(void){ 
        cout<<"plz enter the id "<<endl;
        cin>>id;
        for(int i=0;i<18;i++){
          count++;
        }
       // count++;
  };
  static void getdata()
  {
   // cout<<id; //show an array
    cout<<"the count value of "<<count<<endl;
  }
    void gtdata(void){
        cout<<"the id of the value is"<<id<<endl<<"the cou nt is "<<count<<endl;
    
    }

// stastic variale means here the count is not for the variable but its for 
//all and also called the class stastic variable
  };
  int employee :: count; // here the not declare the variable count is eqyual to zero
  // by defalt it shold be te zero
int main()
{  
   employee siddhu;
   employee harry;
   siddhu.setdata();
   siddhu.gtdata();
   employee :: getdata();
   employee :: getdata();
   employee :: getdata();
   harry.setdata();
   harry.gtdata();

return 0;
}