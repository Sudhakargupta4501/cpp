#include <iostream>
using namespace std;
class ht{
    private:
    int* table;
    int size;
    public:
    ht(int s){
        size=s;
        table=new int[size];
        for(int i=0;i<size;i++){
            table[i]=-1;
        }
    }
    int hashFunction(int key){
        return key%size;
    }
    void linearProbing(int key){
        int index=hashFunction(key);
        while(table[index]!=-1){
            index=(index+1)%size;
        }
        table[index]=key;
    }
    void quadraticProbing(int key){
        int index=hashFunction(key);
        int i=0;
        while(table[index]!=-1){
            i++;
            index=(index+i*i)%size;
        }
        table[index]=key;
    }
    void display(){
        for(int i=0;i<size;i++){
            if(table[i]!=-1){
                cout<<i<<" : "<<table[i]<<endl;
            }
        }
    }

}
;
int main(){
    ht h(10);
    h.linearProbing(5);
    h.linearProbing(15);
    h.linearProbing(25);
    h.linearProbing(35);
    cout<<"Hash Table using Linear Probing:"<<endl;
    h.display();
    
    ht h2(10);
    h2.quadraticProbing(5);
    h2.quadraticProbing(15);
    h2.quadraticProbing(25);
    h2.quadraticProbing(35);
    cout<<"Hash Table using Quadratic Probing:"<<endl;
    h2.display();
    
    return 0;
}