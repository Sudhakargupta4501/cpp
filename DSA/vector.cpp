// #include<iostream>
// # include<vector>
// using namespace std;
// int main(){

//     vector <int>  v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     for(int i = 0;i<v.size();i++)

//     {
//         cout<<v[i];
//     }
    
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
     

    vector<int> a;
    a.push_back(10);
    a.push_back(3);
    a.push_back(50);

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}