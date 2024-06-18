#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
    Node(int data){
        this->data=data;
        this->link =NULL;
    }
};
void insertAtStart(Node* &node,int data){
    Node* temp = new Node(data);
    temp->link = node;
    node=temp;
}

void display(Node* &n){
    Node* temp =n;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    
}

void shrtLink(Node* &head){
    Node* temp=head;
    // Node* temp2=new Node();
    int n=0;
    while (temp!=NULL)
    {
        n++;
        temp=temp->link;
    }
    for(int i=0;i<n;i++){
    temp=head;
        for(int j=0;j<n-1;j++){
            if(temp->data > temp->link->data){
                swap(temp->data,temp->link->data);
            }
            temp = temp->link;
        }
    }
    display(head);
}

void insertAtEnd(Node* &head,int data){
    Node* temp =new Node(data);
    if(head==NULL){
        head=temp;
    }
}

int main(){
    Node* n = new Node(5);
    Node* temp = n;
    insertAtStart(temp,10);
    display(temp);
    insertAtEnd(temp,53);
    display(temp);

return 0;
}