#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }

    void displaydata(){
        cout<<"the point is "<<x<<","<<y<<endl;
    }
};
//point :: p


int main()
{ point c(4,7);

c.displaydata();
    
return 0;
}