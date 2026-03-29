#include<iostream>
using namespace std;

int main()
{
    int pali,sum=0,n,tem;
    cout<<"enter no"<<endl;
    cin>>n;
    tem=n;
    while(n!=0){
        pali=n%10;
        sum=sum+pali*pali*pali;
        n=n/10;
    
    }
    if(tem==sum)
    {
        cout<<"no is palindrome"<<endl;
    }
    else
    {
        cout<<"no is not a palindrome"<<endl;

    }
    
    
return 0;
}