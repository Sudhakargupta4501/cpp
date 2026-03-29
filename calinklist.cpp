// write a cpp fuction to add the node in the linklist in front and the last of the link list using function and take input from the user first link list and then inserting vaue node
#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int val) {
        data=val;
        next=nullptr;
    }
};
void insertAtFront(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
void insertAtEnd(node* &head,int val){
    node* n = new node(val);
    if(head==nullptr){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* head=nullptr;
    int n,val;
    cout<<"Enter the number of nodes to insert at end: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter value for node "<<i+1<<": ";
        cin>>val;
        insertAtEnd(head,val);
    }
    cout<<"Linked list after inserting at end: ";
    display(head);
    
    cout<<"Enter value to insert at front: ";
    cin>>val;
    insertAtFront(head,val);
    cout<<"Linked list after inserting at front: ";
    display(head);
    
    return 0;
}


