#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createBST(Node* root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data < root->data)
    {
        root->left = createBST(root->left, data);
    }
    else
    {
        root->right = createBST(root->right,data);
    }
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        //To display the binary tree in a tree like structure
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

void getInput(Node* &root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = createBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node *n = NULL;
    cout << "Enter data: ";
    getInput(n);
    cout<<"Level order Traversal: ";
    levelOrderTraversal(n);

    return 0;
}