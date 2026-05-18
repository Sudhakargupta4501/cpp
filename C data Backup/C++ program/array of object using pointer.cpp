#include<iostream>
using namespace std;
class shop{
    int id;
    int prize;
    public:
    void setdata(int a, int b){
        id = a;
        prize = b;
    }
    void getdata(){
        cout<<"enter the prize"<<id<<endl;
        cout<<"prize of the item is"<<prize<<endl;
    }
};
int main()
{
    int size = 2;
     //int *ptr = &size      
     // int *ptr = new int [13]
     // here we dont use of int data type but 
     // we use the shop data type those we preapre by the class
     //general store item
     // veggess item 
     // hardware item

    shop *ptr = new shop[size];
	    shop *ptrtemp = ptr ;
    for( int i =0;i<= size; i++){
         int id ;
         int prize;
            cout<<" enter id and prize of an item"<<i+1<<endl;
            cin>> id>>prize;
           // (*ptr) = setdata( id , prize);
            ptr->setdata( id , prize);
            ptr++;

    }
        for (int i =0; i<=size ; i++){
            cout<<"item no :"<<i+1<<endl;
            ptr->getdata();
            
        }
return 0;
}