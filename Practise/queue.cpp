#include <iostream>
using namespace std;

class Queue
{
public:
    int data;
    Queue *next;

    Queue(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void enQueue(Queue* &tail,int data){
    Queue* temp = new Queue(data);
    tail->next=temp;
    tail=temp;
}

void displayQueue(Queue* &head){
    Queue* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deQueue(Queue* &head)
{
    Queue *temp = head;

    head = head->next;
    delete temp;
    cout << "Node deleted successfully" << endl;
    cout<<"Queue after dequeing: ";
    displayQueue(head);
}

int main()
{
    int n;
    Queue *node = new Queue(10);
    Queue* tail = node;
    cout << "Enter the size of the queue: ";
    cin >> n;
    cout<<"Enter the queue elements: ";
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        enQueue(tail,d);
    }
    cout<<"Queue: ";
    displayQueue(node);
    deQueue(node);
    enQueue(tail,90);
    displayQueue(node);
    deQueue(node);
    deQueue(node);
    
    return 0;
}