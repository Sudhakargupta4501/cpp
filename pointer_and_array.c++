#include<iostream>
using namespace std;
int main()
{
    int mark[4]={12,45,78,96};
 /* int* p = mark;
    cout<<"the value of p is"<<* (P+1)<<endl;
cout<<"the value of p is"<<* P<<endl;
cout<<"the value of p is"<<* P<<endl;
cout<<"the value of p is"<<* P<<endl;*/
int* p=mark;
cout<<*(p+2)<<endl;
cout<<*(++p)<<endl;
cout<<*(p++)<<endl;
cout<<*(p+1)<<endl;
return 0;
}