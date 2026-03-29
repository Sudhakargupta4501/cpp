#include<iostream>
using namespace std;

int main()
{
    int rem,sum=0,n;
    cout<<"enter no"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    
    }
    cout<<"sum is="<<sum;
    
return 0;
}