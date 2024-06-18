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

void display(Node* &n){
    Node* temp =n;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }

}

void insertAtEnd(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->link=temp;
    tail=temp;
}

int getNumber(Node* head){
    int n=0;
    Node* temp = head;
    while (temp!=NULL)
    {
        n=n*10+temp->data;
        temp=temp->link;
    }
    return n;
}

bool isPallindrome(int n){
    int rem=0,rev;
    int m=n;
    while(n>0){
        rem=n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    
    if(rev==m){
        return true;
    }
    return false;
}
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    head = prev;
    return head;
}


int main(){
    Node* n = new Node(1);
    Node* tail = n;
    insertAtEnd(tail,3);
    insertAtEnd(tail,2);
    insertAtEnd(tail,1);
    display(n);
    Node* rev = reverseLinkedList(n);
    cout<<"Reverse: ";
    display(rev);
    

return 0;
}