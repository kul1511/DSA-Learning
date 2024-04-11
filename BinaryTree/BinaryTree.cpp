#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertIntoTree(node* root){
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter left data of "<<data<<": ";
    root->left  = insertIntoTree(root->left);

    cout<<"Enter right data of "<<data<<": ";
    root->right = insertIntoTree(root->right);
    
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
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

int main(){
    node* n = NULL;
   n= insertIntoTree(n); 
    cout<<"Level Order Traversal: \n";
    levelOrderTraversal(n); 
return 0;
}