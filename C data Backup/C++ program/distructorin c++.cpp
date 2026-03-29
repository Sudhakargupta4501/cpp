#include<iostream>
using namespace std; // destroctor free the memory if the object in the program
// are distroy but it will have unwanted memory distructor will free the memory
// distroctory  never take any argument and nor give the any value
int count =0; // the global value is declered
class num{
    int x;
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called for object"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time where my distrocter is called for objeect no "<<count<<endl;
        count++;
    }
};
using namespace std;

int main()
{cout<<"now i am on the main function"<<endl;
cout<<"creating first no n1"<<endl;
num n1;
{   cout<<"entering this block"<<endl;
    cout<<"creating two or more object"<<endl;
   num n2,n3;
   cout<<"creating this block"<<endl;

}
   cout<<"back to main"<<endl; 
return 0;
}