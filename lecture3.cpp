#include<iostream>
using namespace std;
class hastable{
    private:
    int* table;
    int size;
    public:
    hashtable(int s){
        size = s;
        table = new int [size];
        for(int i=0;i<size;i++){
            table[i]=-1;

        }

    }
    int hashFunction(int key){
        return key% size;
    }
    void linearprobing(int key){
        int index = hashFunction(key);
        while(table[index]!=-1){}
    }
}