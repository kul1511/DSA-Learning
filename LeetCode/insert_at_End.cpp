#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
    Node(int data){
        this->data=data;
        this->link=NULL;
    }
};
void insertAtEnd(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->link=temp;
    tail=temp;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->link = head;
    head=temp;
}

void insertAtMiddle(Node* &head,int data,int position){
    int cnt=0;
    Node* temp = head;
    while(cnt<position-1){
        temp=temp->link;
        cnt++;
    }

    Node* insertingNode = new Node(data);
    insertingNode->link = temp->link;
    temp->link = insertingNode;
}

void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}

int main(){
    Node* node = new Node(10);
    Node* head = node;
    Node* tail = node;
    display(node);
    insertAtEnd(tail,20);
    display(node);
    insertAtEnd(tail,40);
    display(node);
    insertAtEnd(tail,60);
    display(node);
    insertAtHead(head,9);
    display(head);
    insertAtHead(head,19);
    display(head);
    insertAtMiddle(head,50,3);
    display(head);

return 0;
}