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
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = { 5,2,6,1,8,9,};
//     int n= sizeof(arr)/sizeof(arr[0]);

//     for(int i =0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             while (arr[j]>arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1]=temp;
//             }
            

//         }
//     }
//     for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<endl;
// }    return 0;
// }

// // selection sort
// #include<iostream>
// using namespace std;
// int main(){
//      int arr[] ={2,3,1,7,5,9};
//      int n = sizeof(arr)/sizeof(arr[0]);
     
//      for(int i=0;i<n-1;i++)
//      { int minarrIndex = i ;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j] < arr[minarrIndex])
//             {
//                 minarrIndex = j;
//             }

//         }
//         int temp = arr[i];
//         arr[i] = arr[minarrIndex];
//          arr[minarrIndex] = temp;

//      }
//    for (int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<" ";
//    }

//     return 0;
// }

// find the maximum and return the maximum element

// #include<iostream>
// using namespace std;
//   int ekfun(int arr[],int n)
//       {
        
//        int  max = arr[0];
    
//          for(int i = 0;i<n;i++)
//        {
//        // if(max > arr[i])  // for minium
//        if(max < arr[i])  // for maxium
//         {
//           max = arr[i];
//         }
//         }
//         return max;
//       }
// int main(){
      
//     int arr[] ={2,5,6,89,6,4,45,99,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
       
//        int sum = ekfun(arr,n);
//     cout<<sum<<endl;
//     return 0;
// }


// //  sum of element
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] ={45,6,7,8,90,23,45};
//   int n = sizeof(arr)/sizeof(arr[0]);
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }
//     cout<<sum;
//     return 0;
// }

 //      count even and odd
// #include<iostream>
// using namespace std;
// int main(){
    
//   int arr[] ={45,6,7,0,8,90,23,45,0};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int countEvn =0;
//   int countodd =0;
//   int countcp =0;
//   for(int i = 0;i<n;i++)
//   {   if (arr[i] ==0)
//     {
//         countcp ++;
//     } 
//     else{
//     if(arr[i] %2==0)
//     {
//         countEvn ++;
//     }
//     if(arr[i] %2 !=0)
//     {
//         countodd ++;
//     }
//     }
    
//   }
//   cout<<"No of even sum is "<<countEvn<<endl;
//   cout<<"No of ODD sum is "<<countodd<<endl;
//   cout<<"No of Zero equal to "<<countcp<<endl;
  
//     return 0;
// }


// swapintof revers of array by two pointer approach
// #include<iostream>
// using namespace std;

// // void   numreverse(int arr[], int n){
// //     int left = 0;
// //     int right = n-1;
// //     while (left < right)
// //     {
// //         swap(arr[left++],arr[right--]);
// //     }
// //     for(int i =0;i<n;i++){
// //         cout<<arr[i]<<" , ";
// //     }

    
// // }

// //  void numreverse(int arr[],int n){
// // int left = 0;
// // int right = n-1;
// // while(left<right){
// //    swap(arr[left++], arr[right--]);
// // }
// //  for(int i=0;i<n;i++)
// //  {
// //     cout<<arr[i]<<" ";
// //  }


// //  }


// void checksort(int arr[],int n){
//     // int first = arr[0];
//     // int second = arr[1];
//     bool issort = false;
//     for(int i = 0;i<n-1;i++)
//     {
//      if(arr[i]<arr[i]+1){
//         issort = true;
//      }
//      else{
//         issort = false;
//      }
  
//     }
//     if(issort)
//     {
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
// }


// int main(){
    
//      int arr[] ={7,45,6,7,0,8,90,23,45,0};
//   //   int arr[] = {1,2,3,4,5,6,7,8,9};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   //numreverse(arr,9);
// checksort(arr,10);
//   return 0;
// }



/// medium level question of array
// remove duplicate from sorted array
#include<iostream>
using namespace std;
int main(){
        int arr[] = {45,6,7,8,90,23,45};
    int n = sizeof(arr)/sizeof(arr[0]);

    return 0;
}
