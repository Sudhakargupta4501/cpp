// #include<iostream>
// #include<stack>
// using namespace std;
//  int main()
//  {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30); 
//     cout<<"Top element: "<<s.top()<<endl;
//     cout<<s.size()<<endl;
//     s.pop();
//     cout<<"Top element after pop: "<<s.top()<<endl;
//     s.pop();
//     s.push(40);
//     s.pop();
//     cout<<"Top element: "<<s.top()<<endl;
//     if(s.empty())
//     {
//         // cout<<"Stack is empty"<<endl;
//     }
//     else
//     {
//         cout<<"Stack is not empty"<<endl;
//     }
//     return 0;   
//  }


// stack using array

// #include<iostream>
// #include<stack>
// using namespace std;
// class Stack{
//     int arr[100];
//     int top;

// public:
// Stack(){
//     top=-1;
// }

// void push(int x){
//     if (top==99)
//     { 
//         cout<<"Stack overflow"<<endl;
//         return;
//     }
//     arr[++top];
    
// }
// void pop(){
//     if(top == -1)
//     {
//         cout<<"Stack is underflow"<<endl;
//         return;
//     }
//     cout<<"deleted element: "<<arr[top--]<<endl;

// }

// void peak(){
//     if(top == -1)
//     {
//         cout<<"Stack is empty"<<endl;
//         return;
//     }
//     cout<<"Top element: "<<arr[top]<<endl;
// }
// void display(){
//     for(int i= top; i>=0 ; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// } 

// };


// parathecis checker using stack

// #include <iostream>
// #include <stack>
// using namespace std;
//  bool check(string s)
//     {
//         stack<char> st;
//         for(int i=0; i<s.length(); i++)
//         {
//             char ch = s[i];
//             if(ch == '(' || ch == '{' || ch == '[')
//             {
//                 st.push(ch);
//             }
//             else
//             {
//                 if(st.empty())
//                 {
//                     return false;
//                 }
//                 char top = st.top();
//                 st.pop();
//                 if((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '['))
//                 {
//                     return false;
//                 }
//             }
//         }
//         return st.empty();
//     }
// int main()
// {    string s;
//     cout<<"Enter the string: ";
//     cin>>s;
//     if(check(s))
//     {
//         cout<<"Valid parentheses"<<endl;
//     }
//     else
//     {
//         cout<<"Invalid parentheses"<<endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;
 int prec(char c)
 {
     if(c == '^')
     return 3;
     else if(c == '*' || c == '/')
     return 2;
     else if(c == '+' || c == '-')
     return 1;
     else
     return -1;
 }

int main() {
    string exp = "A+B*C";
    stack<char> s;
    string result = "";

    for(char c : exp) {
        if(isalnum(c))
            result += c;

        else {
            while(!s.empty() && prec(s.top()) >= prec(c)) {
                result += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while(!s.empty()) {
        result += s.top();
        s.pop();
    }

    cout << "Postfix: " << result;
}


 //post fix

 #include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp = "23*54*+9-";
    stack<int> s;

    for(char c : exp) {
        if(isdigit(c))
            s.push(c - '0');

        else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();

            switch(c) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
            }
        }
    }

    cout << "Result: " << s.top();
}