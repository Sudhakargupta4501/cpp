#include<iostream>
using namespace std;
int main(){
    int i, age;
cout<<"plz enter you age : ";
cin>>age;
if( age>=1 && age<=5)
{
    cout<<"tu chota hai under ja but pani se dur rehana"<<endl;
}
else if(age>=6 && age<=12)
{
    cout<<"tu chota hai under ja but  200 rupai de ka="<<"200"<<endl;
}
else if(age>=13 && age<=18)
{
    cout<<"tu chota hai under ja but 400 rupai de="<<"400"<<endl;
}
else if(age>18 && age<=50)
{
    cout<<"tu paisa de aur ja = "<<"600"<<endl;
}
else 
{
    cout<<" tu ghar par  jaa "<<endl;
}
    return 0;
}