#include <iostream>
using namespace std;
class Node
{
public:
    string data;
    Node *next;
    Node(string data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertIntoStack(Node *&tail, string data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse() {
    Node* head=NULL;
        Node *prev = nullptr, *current = head, *nextNode = nullptr;
        while (current != nullptr) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
    }

int main()
{
    Node *node = new Node("a");
    Node *tail = node;
    int n;
    string s;
    cout<<"Enter stack size: ";
    cin>>n;
    cout<<"Enter String characters with spaces: ";
    for(int i=0;i<n;i++){
        cin>>s;
    insertIntoStack(tail, s);
    }
    cout<<"Stack: ";
    display(node);
    reverse();
    cout<<"\nAfter reversing: ";
    display(node);
return 0;
}