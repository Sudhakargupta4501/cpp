#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"plz enter age"<<endl;
    cin>>age;
    if(age>18)
    {
        cout<<"you are elligable for vote"<<endl;

    }
    else if(age<0)
    {
        cout<<"tu zinda he nahi hai"<<endl;
    }
    else{
        cout<<"tu voting maat deee"<<endl;
    }

    return 0;
}