//  //code for swap the value


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,temp;
//     cout<<"Enter the numbers: ";
//     cin>>a>>b;
//     // temp=a;
//     // a=b;
//     // b=temp;
//     // a=a+b;
//     // b=a-b;
//     // a=a-b;
//      a=a^b;
//     b=a^b;
//     a=a^b;
//     cout<<"After swapping: "<<a<<" "<<b;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int count =0;
//     while(n!=0){
//         n>>=1;
//         count ++;
//     }
//     cout<<"Number of bits: "<<count;
//     return 0;
//

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the year: ";
//     cin>>n;
//     // if((n%400 ==0)|| ( n%4==0 && n%100!=0)){
//     //     cout<<"leap year";
//     // }
//     // else{
//     //     cout<<"not a leap year";
//     // }

//  if ( n %100 == 0)
//  {
//         if ( n %400 == 0)
//         {
//             cout<<"leap year";
//         }
//         else{
//             cout<<"not a leap year";
//         }
//     }
//     else if ( n %4 == 0)
//     {
//         cout<<"leap year";
//     }
//     else{
//         cout<<"not a leap year";
//  }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     int c;
//     cout<<"Enter the lengths of the sides of the triangle: ";
//     cin>>a>>b>>c;
//     if(a+b>c && b+c>a && c+a>b){
//         cout<<"Triangle is possible";
//     }
//     else{
//         cout<<"Triangle is not possible";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//  int n = 1;
//    while(n<11)
//    { if(n%2==0)
//     cout<<n<<" ";
//     n++;
//    }
//     return 0;
// }

//  #include<iostream>
//  #include<cmath>
//  using namespace std;
//  int main(){
//    int num=153;
//    int digit;
//     int sum=0;  
//     int temp = num;
//     int count=0;

//   while(temp!=0){
//    count++;
//     temp = temp / 10;    
//   }
//   temp = num;
//  while(temp!=0){
//       int  digit = temp%10;
//         sum = sum + round(pow(digit, count));
//         temp = temp / 10;
//     }
//      //cout<<sum;
//     if(sum == num){
//         cout<<"Armstrong number";
//     }
//     else{
//         cout<<"Not an Armstrong number";
//     }

//     return 0;
//  }

#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter the number: "; 

    cin>>n;
    // for(int i=2;i<=n/2;i++){
    //     if(n%i==0){
    //         cout<<"Not a prime number";
    //         return 0;
    //     }
    // }
    for(int i=2;i*i<=n;i++){   /// time complicity is root n79
        if(n%i==0){
            cout<<"Not a prime number";
            return 0;
        }
    }
    cout<<"Prime number";
    return 0;
 }


 
