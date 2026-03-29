#include<iostream>
using namespace std;

int main()
{
    int i,n,j;
    cout<<"enter nth no"<<endl;
    cin>>n;
    for(i=2;i<n;i++){
        for(j=2;j<n;j++){
            if(i%j==0){
                cout<<"";
                break;
            }
        }
        if(j==i){
            cout<<""<<j<<endl;
        }
    }
return 0;
}