         //beter MEMORY MANAGEMENT UNION
#include<iostream>
using namespace std;
union money
{
// to use one at a time means union
//its give the use of memori alocation
//beter MEMORY MANAGEMENT
int val;
char car;
float pound;
};
int main()
{   union money m1;
 m1.val= 4;
 m1.car='c';
 m1.pound=12.89;
  cout<<m1.val<<endl;
      cout<<m1.car<<endl;
   cout<<m1.pound<<endl;
return 0;
}