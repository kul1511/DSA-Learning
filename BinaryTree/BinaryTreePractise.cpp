#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *createTree(node *root)
{
    int d;
    cout << "Enter the data: ";
    cin >> d;
    root = new node(d);
    if (d == 0)
    {
        return NULL;
    }
    cout << "Enter the data to be inserted at left of " << root->data << " :";
    root->left = createTree(root->left);
    cout << "Enter the data to be inserted at right of " << root->data << " :";
    root->right = createTree(root->right);

    return root;
}

node *displayTree(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}

void inorderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);

}

void preOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";

}

int main()
{
    node *n = NULL;
    node *n1 = createTree(n1);
    displayTree(n1);
    cout<<"\nIn Order Traversal: ";
    inorderTraversal(n1);
    cout<<"\nPre Order Traversal: ";
    preOrderTraversal(n1);
    cout<<"\nPost Order Traversal: ";
    postOrderTraversal(n1);
    return 0;
}