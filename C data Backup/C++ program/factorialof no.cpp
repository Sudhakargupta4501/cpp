/*#include<iostream>
using namespace std;
    
int main()
{  int i,fact;
int n;
cout<<"plz enter any no"<<endl;
cin>>i;
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
    cout<<"the vactorial of "<<i<<"is= "<<fact<<endl;

return 0;
} */
#include<iostream>
using namespace std;
    
int main()
{  int i,fact=1;
int n;
cout<<"plz enter any no"<<endl;
cin>>i;
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
    cout<<"the factorial is"<<fact<<endl;

return 0;
}