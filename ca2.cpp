#include<iostream>
using namespace std;    
class node{
    public:
    int data;
    node* left;
    node* right;
    
};
node* createnode(int value){
    node* newnode = new node();
    newnode->data = value;
    newnode->left = newnode->right= NULL;
    return newnode;
};
node* insert(node* root,int value){
    if(root == NULL)
    return createnode(value);
    if(value < root->data)
    root->left = insert(root->left,value);
    else
    root->right = insert(root->right,value);
    return root;
}

void inorder(node* root){
    if(root == NULL) 
    {
        return;
    }else
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}