#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out; // decleration of object
    out.open("siddhu2.cpp"); // conecting the object
    out<<"this is me  siddhu"<<endl;
    out<<"hii i an siddhu";  //writing the file
    out.close();  // close the fiole


     // this is alternate metho

     instream in; // decleration of an object
     string st; // decleration string variable
     in.open("siddhu2.cpp");
     
     /*
     in>>st;
     cout<<st;
     in.close(); */    // if we write this or 
     while ( in.endof() ==0);
     {
         getliner(in,st);
         cout<<st<<endl;  // this is for print the whole paragraph of tre file 
     }
   
return 0;
}