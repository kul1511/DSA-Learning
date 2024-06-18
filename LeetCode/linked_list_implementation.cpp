#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;

    Node(int data)
    {
        this->data = data;
        this->link = NULL;
    }

};

void insertAtNode(Node* &head,int newData){
    Node* temp = new Node(newData);
    temp->link=head;
    head=temp;
}

void print(Node* &data){
    Node* temp = data;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}

int main()
{
    Node *node = new Node(30);
    // cout << node->data;
    // cout << endl
    //      << node->link;

    Node* head = node;
    cout<<"\nBefore inserting data: ";
    print(head);
    insertAtNode(head,10);
    cout<<"\nAfter inserting data: ";
    print(head);

    return 0;
}