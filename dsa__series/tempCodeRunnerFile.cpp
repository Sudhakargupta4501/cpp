#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,3,9,7,4};
    int n = sizeof(arr) / sizeof(arr[0]);  // yaha per hum size nukal rehai hai

    for(int i = 0 ;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
    {
       
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }      
    }

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }

    return 0;
}