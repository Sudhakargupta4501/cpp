// // // two pointer approach to reverse a string
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     string s= "asdfghgfdsa";
// //     int left =0;
// //     int right = s.saize()-1;
// //     while(left<right)

// // {
// //     swap(s[left],s[right]);
// //     left++;
// //     right--;

// // }   
// //    cout<<s;
// // return 0;
// // }


// // remove the space and symbols in the stiring
//  #include<iostream>
//     using namespace std;
//     int main(){
//         string s = "as@df#gh$g%fdsa";
//         string ans = "";
//         for(int i=0;i<s.size();i++){
//             if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
//                 ans+=s[i];
//             }
//         }
//         //
//         for(char ch : s)
//         {
//             if(isalnum(ch)){
//                 ans+=ch;
//             }
//         }
//         cout<<ans;
//         return 0;
//     }





code