#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;

    Node(int d){
        this->data=d;
        this->link=NULL;
    }
};

// void insertAtBeginning(Node* &head,int data){
//     Node* temp = new Node(data);
//     temp->link = head;
//     head=temp;
// }

void insertAtEnd(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->link = temp;
    tail = temp;
}

void display(Node* &data){
    Node* temp = data;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
int main(){
    Node* node = new Node(1);
    Node* tail = node;
    int data;
    int count;
    cout<<"Enter the number of data values: ";
    cin>>count;
    cout<<"Enter the data: ";
    for(int i=0;i<count;i++){
        cin>>data;
        insertAtEnd(node,data);
    }
    display(tail);
return 0;
}