#include<iostream>
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

void insertAtEnd(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void findMiddle(Node* &head){
    Node* temp = head;
    int size = 0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    cout<<"\nSize: "<<size;

    if(size%2!=0){
        int flag=0;
        int mid = (size-0)/2;
        Node* t = head;
        while(flag!=mid){
            t = t->next;
            flag++;
        }
        cout<<"\nMID: "<<t->data;
    }
    else{
        int flag=0;
        int mid = (size-0)/2 -1;
        Node* t = head;
        while(flag!=mid){
            t = t->next;
            flag++;
        }
        cout<<"\nMID: "<<t->data;

    }
    
}

int main(){
    Node* node = new Node(10);
    Node* tail = node;
    int n;
    cout<<"Enter the size of the linked list: ";
    cin>>n;
    cout<<"Enter "<<n<<" values: ";
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insertAtEnd(tail,val);
    }
    cout<<"Linked List: ";
    display(node);
    findMiddle(node);
    // Node* mid = findMiddle(node);
    // cout<<"Middle Node: ";
    // display(mid);

return 0;
}