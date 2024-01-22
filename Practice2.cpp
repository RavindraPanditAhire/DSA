#include <iostream>
using namespace std;

// Singly Queue Implementation using Linked List..
class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(NULL) {}
};

class LLQueue
{
    Node *front, *rear;

public:
    LLQueue()
    {
        front = NULL;
        rear = NULL;
    }

    //
    // adding method:
    void enque(int data)
    {
        Node *newNode = new Node(data);
        if (front == NULL && rear == NULL)
        {
            front = rear = newNode;
            cout << rear->data << " Added...\n";
            return;
        }
        cout << rear->data << " Added...\n";
        rear->next = newNode;
        rear = newNode;
    }

    // deleting
    void deque()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "Queue is Empty ..Nothing to DELETED..\n";
            return;
        }
        cout << front->data << " is Deleted...\n";
        front = front->next;
    }

    // display
    void display()
    {
        if (front != NULL)
        {
            Node *temp = front;
            while (temp)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << " ";
        }
        else
        {
            cout << "Queue is Empty.....\n";
        }
    }
};

int main()
{
    LLQueue q;
    q.enque(10);
    q.enque(20);
    q.enque(40);
    q.enque(30);

    q.deque();
    q.deque();
    q.display();
    return 0;
}