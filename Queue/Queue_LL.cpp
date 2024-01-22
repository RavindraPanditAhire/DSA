#include <iostream>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};

class QueueLL
{
    Node *front;
    Node *rear;

public:
    QueueLL()
    {
        this->front = NULL;
        this->rear = NULL;
    }

    // adding
    void enque(int data)
    {
        Node *newNode = new Node(data);
        if (front == NULL && rear == NULL)
        {
            rear = front = newNode;
            cout << data << " added..\n";
            return;
        }
        Node *temp = rear;
        temp->next = newNode;
        rear = newNode;
        cout << data << " added..\n";
    }

    // print
    void dispaly()
    {
        if (front == NULL)
        {
            cout << "Nothing to Display..\n";
            return;
        }

        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    QueueLL q;
    q.dispaly();
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.dispaly();

    return 0;
}