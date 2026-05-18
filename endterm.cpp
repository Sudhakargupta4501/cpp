// Program to search an element in Binary Search Tree

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Function to insert node in BST
Node* insert(Node* root, int value) {
    if (root == NULL)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Function to search element in BST
bool search(Node* root, int key) {
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    Node* root = NULL;

    // Insert elements
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 7);
    insert(root, 12);
    insert(root, 18);

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    // Search element
    if (search(root, key))
        cout << "Element found in Binary Search Tree." << endl;
    else
        cout << "Element not found in Binary Search Tree." << endl;

    return 0;
}