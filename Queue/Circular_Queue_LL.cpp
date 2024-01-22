#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};

class Circular_Queue_LL
{
private:
    Node *front;
    Node *rear;

public:
    Circular_Queue_LL()
    {
        front = NULL;
        rear = NULL;

    }

    bool isEmpty(){
        return front == NULL;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);

        if (isEmpty())
        {
            rear = front = newNode;
            cout << data << " added..\n";
        }
        else{
             rear->next=newNode;
             rear=newNode;
             cout << data << " added..\n";
        }
        rear->next=front;
        
    }

    // print
    void print()
    {
        if (isEmpty())
        {
            cout << "Nothing to Display...\n";
            return;
        }
        Node *temp = front;
        do
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        } while (temp != front);
        
    }

    // delete
    void deque(){
        if (isEmpty())
        {
            cout<<"Nothing to DELETED.....\n";
            return;
        }

        Node *temp=front;

        if (front== rear)
        {
            front=rear=NULL;
        }
        else{
        cout<<front->data<<" is DELETED..\n";
        front=front->next;
        rear->next=front;
        }
        
    }
};

int main()
{
    Circular_Queue_LL q;
    q.print();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    // q.enqueue(30);
    q.print();
    return 0;
}