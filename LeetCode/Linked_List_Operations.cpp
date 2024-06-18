#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;
    Node(){}
    Node(int data)
    {
        this->data = data;
        this->link = NULL;
    }
};

void insertAtStart(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->link = head;
    head = temp;
}


void insertAtMiddle(Node* &head,int data,int position){
    Node* temp = head;
    int cnt=0;
    while (cnt<position-1)
    {
        temp=temp->link;
        cnt++;
    }

    Node* insert = new Node(data);
    insert->link = temp->link;
    temp->link = insert;
    
}


void insertAtEnd(Node* &tail,int data){
    Node* temp = new Node(data);
//    Node* temp2=tail;
    // temp=tail;/
    // int i=0;
    // while (temp!=NULL)
    // {
    //     temp=temp->link;
    //     cout<<i;
    //     i++;
    // }
    tail-> link = temp;
    tail=temp;

}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->link;
    }
    cout <<"NULL"<< endl;
}

void sortLink(Node* &head){
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
void start()
{
    Node *node = new Node(10);
    Node* tail=node;
    char ch;
    int insert;
    do
    {
        cout << "Enter: \n1-Insertion At Start\n2-Insertion At Middle\n3-Insertion At End\n4-Display\n";
        cin >> insert;

        switch (insert)
        {
        case 1:
            int data;
            char c;
            c = 'Y';
            while (c == 'y' || c == 'Y')
            {
                cout << "Enter data to be inserted: ";
                cin >> data;
                insertAtStart(node, data);
                cout << "Do you want to continue inserting? [Y or N]: ";
                cin >> c;
            }

            break;

        case 2: 
            int middle,pos;
            char cMiddle;
            cMiddle = 'Y';
            while (cMiddle == 'y' || cMiddle == 'Y')
            {
                cout << "Enter data to be inserted and at the position: ";
                cin >> middle>>pos;
                insertAtMiddle(node, middle,pos);
                cout << "Do you want to continue inserting? [Y or N]: ";
                cin >> cMiddle;
            }

            break;

        case 3:
            int end;
            char cEnd;
            cEnd = 'Y';
            while (cEnd == 'y' || cEnd == 'Y')
            {
                cout << "Enter data to be inserted: ";
                cin >> end;
                insertAtEnd(tail,end);
                cout << "Do you want to continue inserting? [Y or N]: ";
                cin >> cEnd;
            }
            break;

        case 4:
            display(node);
        default:
            break;
        }
        cout << "Do you want to continue with the operations? [Y or N]: ";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
    sortLink(node);
}

int main()
{
    start();
    return 0;
}