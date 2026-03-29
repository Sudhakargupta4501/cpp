#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{  //openaning fileusing constructor
// thi is for writing in the file out<<st
string st = "sudhakar ramesh gupta";
ofstream set("siddhu.cpp"); // write operator


   cout<<st;    
    /* string st2;
     ifstream in("siddhu2.cpp");  // we can write insted of in and out any thing because it is a object

     
     //in>>st2; // it will only print the one word of the file  if we print the whole command we use getline function
     getline(in,st2);
     getline(in,st2);
      // jo line ka word chaiya wo calla hoga agar second wala dusa line ka show keraga pehila wala nahi 
      // if we write fisrst time it will show first line 
      // if we write 3rd time it will show only third line
     cout<<st2; */
return 0;
}

/*The use ful class for working with files in c++
1.fstreambase
2. fstream  ->derived from fstreambase 
3.ifstream   ->derived from fstream base
*/
/*
there are to way for open two file 
1.using the constructor
2.using the no function open() of the class
*/