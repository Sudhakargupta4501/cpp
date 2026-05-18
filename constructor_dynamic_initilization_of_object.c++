#include<iostream>
using namespace std;
 class bankdeposit{
     int principal;
     int year;
     float intrest;
     float returnvalue;
     public:
     bankdeposit(void){}  //it is compulsary to creade one empty function
      void  show()
   {
     cout<<endl<<"theprincipal amount was"<<principal<<endl
     <<"return value after"<<year
     <<"is"<<returnvalue<<endl;
}
 bankdeposit(int p , int y , float r);
     bankdeposit(int p , int y , int r); // you can write the value of r =sum point value
};
 
   bankdeposit :: bankdeposit(int p , int y , float r) // fuction friend
 {    principal = p;
    year = y;
    intrest = r;
    returnvalue = principal;
    for(int i=0;i<y;i++){
        returnvalue = returnvalue*(1+intrest);
    } 
 }

bankdeposit :: bankdeposit(int p , int y , int r)
 {    principal =p;
    year =y;
    intrest =float(r)/100;
    returnvalue =principal;
    for(int i=0;i<y;i++){
        returnvalue = returnvalue*(1+intrest);
    } 
 }
   
int main()
{
  bankdeposit bd1,bd2,bd3,bd4;
  int p,y;
  float r;
  int R;
  cout<<"plz enter the value of P "<<endl;
  cin>>p;
  cout<<"plz enter the value of  Y"<<endl;
  cin>>y;
  cout<<"plz enter the value of r"<<endl;
  cin>>r;
   bankdeposit(p,y,r) = bd1;
  bd1.show();
 cout<<"plz enter the value of P "<<endl;
  cin>>p;
  cout<<"plz enter the value of  Y"<<endl;
  cin>>y;
  cout<<"plz enter the value of R"<<endl;
  cin>>R;
  bd2 = bankdeposit(p,y,R);
  bd2.show();
  bd3. show();
  
  return 0;
}