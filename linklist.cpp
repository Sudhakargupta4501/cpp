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


// #include<iostream>
// using namespace std;
//  class node{
//      public:
//     int data;
//     node* next;
//  };
//  void insertionatbeg(node*& head,int value)
//  {
//    node* newnode = new node();
//    newnode -> data = value;
//    newnode -> next = head;
//    head = newnode;
//  }
//  void display(node*& head){
//      node* temp = head;
//      while(temp!=NULL){
//          cout<<temp->data<<" ";
//          temp = temp->next;
//      }
//  }

// int main(){
    
//     node* head = new node();
//     node* fourth = new node();
//     node* fifth = new node();
//     node* second = new node();
//     node* third  = new node();
//     head->data = 10;
//     head->next = second;
//     second->data = 20;
//     second->next = third; 
//     third->data = 30;
//     third->next = fourth;   
//     fourth->data = 40;
//     fourth->next = fifth;
//     fifth->data = 50;
//     fifth->next = NULL;
   
//     insertionatbeg(head,25);
//     insertionatbeg(head,5);
//      display(head);
//     return 0;
// }

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void display(node*&head)
{
    node*temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    
}
void insertionatbeg(node*& head,int value)
{
    node* newnode =new node();
    newnode->data = value;
    newnode->next=head;
    head = newnode;
}
  void insertionatend(node*& head,int value){

    node* newnode = new node();

    newnode->data = value;
    node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;

  }

int main(){
    node* first = new node();
    node* second = new node();  
    node* third = new node();
    node* fourth = new node();
    first->data =10;
    first->next = second;
    second->data = 20;
    second->next = third;       
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;


insertionatbeg(first,5);
insertionatend(first,50);
 display(first);
    return 0;
}