// structure have nat a function 
#include<iostream>
using namespace std;
 typedef struct chorgang
{
    int name;
    char code;
    float ratio;
    double coridhan;
} cg; //here we use afer define typedef so we have dont wrie stuctue
// again and again we declare as a cg
int main()
{ struct chorgang siddhu;
  siddhu.name='siddhu';
  siddhu.code='o';
  siddhu.ratio=7.46;
  siddhu.coridhan=3456.4567;
   cout<<siddhu.name<<endl;
   cout<<siddhu.code<<endl;
   cout<<siddhu.coridhan<<endl;
   cout<<siddhu.ratio<<endl;
  
return 0;
}