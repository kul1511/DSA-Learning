#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
}; 

void insertAtEnd(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next=temp;
    tail=temp;
}



void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


void usingStack(Node* head){
    stack<int> s;

    //Pushing data into Stack
    Node* temp = head;
    Node* temp1 = head;
    while(temp!=NULL){
        s.push(temp->data);
        temp = temp->next;
    }
    cout<<"top: "<<s.top();

    // Retreiving data from Stack;
    while(temp1!=NULL){
        temp1->data=s.top();
        s.pop();
        temp1=temp1->next;
    }
    cout<<"\nReverse Linked List: ";
    display(head);

}


void usingIterative(Node* &head){
    Node* temp = head;
    Node* prev = NULL;

    while(temp!=NULL){
        Node* front = temp->next;
        temp->next=prev;
        prev = temp;
        temp = front;
    }
    display(prev);
}


Node* reverseUsingRecursion(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp = reverseUsingRecursion(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return temp;
}


int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insertAtEnd(tail,20); 
    insertAtEnd(tail,30); 
    insertAtEnd(tail,40); 
    insertAtEnd(tail,50); 
    display(head);
    // cout<<"Reverse Linked List using Bruteforce: ";
    // usingStack(head);

    //using iterative
    // cout<<"Reverse Linked List using Optimised: ";
    // usingIterative(head);

    //using Recursion
    cout<<"Reverse Linked List using Recursion: ";
    Node* temp = reverseUsingRecursion(head);
    display(temp);
    

return 0;
}