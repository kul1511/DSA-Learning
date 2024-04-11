#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertIntoStack(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void display(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void pop(Node *&tail)
{
    Node *temp = tail;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;

    }
    delete temp->next;
    temp->next=NULL;
    cout << "Node deleted successfully" << endl;
}

int main()
{
    Node *node = new Node(10);
    Node *tail = node;
    int choice;
    char ch;
    do
    {
        cout << "1 - Push\n2 - Pop\n3 - Display Stack\nEnter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1: // PUSH Case
            int data;
            cout << "Enter the data to insert into Stack: ";
            cin >> data;
            insertIntoStack(tail, data);
            break;

        case 2: // POP Case
            pop(node);
            break;

        case 3:
            display(node);
            break;
        default: cout<<"Enter a valid choice: ";
                cin>>choice;
            break;
        }
        cout << "Do you want to continue(Y || N): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    return 0;
}