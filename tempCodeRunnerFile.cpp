// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
   
//  node* next;
// };

// int main(){
//     node* head = new node();
//     node* second = new node();
//     node* third = new node();
//      head->data = 10;
//      head -> next = second;  
//      second -> data = 20;
//      second->next = third;  
//      third->data = 30;
//      third->next = NULL;
//      node* temp = head;
//      while(temp!=NULL)     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//      }
//     return 0;

// }


#include<iostream>
using namespace std;
 class node{
     public:
    int data;
    node* next;
 };
 void insertionatbeg(int value)
 {
   node* newnode = new node();
   newnode -> data = value;
   newnode -> next = head;
   head = newnode;
 }

int main(){
    
    node* head = new node();
    node* fourth = new node();
    node* fifth = new node();
    node* second = new node();
    node* third  = new node();
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third; 
    third->data = 30;
    third->next = fourth;   
    fourth->data = 40;
    fourth->next = fifth;
    fifth->data = 50;
    fifth->next = NULL;
    while(head!=NULL){
        cout<<head->data<<"-> ";
        head = head->next;
    }
    insertionatbeg(5);
    insertionatbeg(15);

    return 0;
}