#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int key) {
    Node* node = new Node();
    node->data = key;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* insert(Node* root, int key) {
    if (root == nullptr)
        return newNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << "Sum of digits of " << root->data << " is " << sumOfDigits(root->data) << endl;
        inorderTraversal(root->right);
    }
}
int main() {
    Node* root = nullptr;
    int num_elements;
    cout << "Enter the number of elements: ";
    cin >> num_elements;

    cout << "Enter " << num_elements << " elements:" << endl;
    for (int i = 0; i < num_elements; ++i) {
        int element;
        cin >> element;
        root = insert(root, element);
    }
    cout << "Sum of digits of each element in the BST:" << endl;
    inorderTraversal(root);
    return 0;
}