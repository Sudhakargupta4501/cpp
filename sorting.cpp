#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,1,26,6,8,67};
    int n= sizeof(arr)/sizeof(arr[0]);  
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}