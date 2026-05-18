//write a cpp program to insert the node in a linked list where i have 10,15,18,39 value of data in front and at the end
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
void IFront(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
void IEnd(node* &head,int val){
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
    IEnd(head,10);
    IEnd(head,15);
    IEnd(head,18);
    IEnd(head,39);
    cout<<"Linked list after inserting at end: ";
    display(head);
    IFront(head,5);
    cout<<"Linked list after inserting at front: ";
    IEnd(head,45);
    display(head);
    return 0;
}