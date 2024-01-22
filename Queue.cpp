#include <iostream>
using namespace std;

class QueueArray
{
    int size;
    int front, rear;
    int *arr;

public:
    QueueArray(int cap)
    {
        this->size = cap;
        this->front = -1;
        this->rear = -1;
        this->arr = new int[cap];
    }

    // if Empty
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }

    // if Full
    bool isFull()
    {
        return rear == size - 1;
    }

    // adding new Item
    void enque(int data)
    {
        if (isFull())
        {
            cout << "Queue is Full...cannot add More...\n";
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
        cout << data << " added at Rear...\n";
    }

    // Display
    void Display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to Display...\n";
            return;
        }

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Deleting Item from Queue

    void deque()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to Delete...\n";
            return;
        }

        if (front == rear + 1)
        {
            front = rear = -1;
        }

        cout << arr[front] << " Deleted...\n";
        arr[front] = 0;
        front++;
    }
};

/////////////////////QUeue using LinkedList////////////////////////////////

class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};

class Queue_LL
{
    Node *front;
    Node *rear;

public:
    Queue_LL()
    {
        this->front = NULL;
        this->rear = NULL;
    }

    // if Empty

    bool isEmpty()
    {
        return front == NULL && rear == NULL;
    }
    // adding new Element
    void enque(int data)
    {

        Node *newNode = new Node(data);
        if (isEmpty())
        {
            rear = front = newNode;
            cout << data << " is Added...\n";
            return;
        }
        Node *temp = rear;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        temp = newNode;
        cout << data << " added....\n";
    }

    // printing the Queue Elements
    void Display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to Dusplay...\n";
            return;
        }

        Node *temp = front;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != rear);
    }

    // deleting Items

    void deque()
    {
        if (isEmpty())
        {
            cout << "QUeue is Empty..Nothing to Deleted..\n";
            return;
        }

        if (front->next == NULL)
        {
            front == rear;
        }

        cout << front->data << " is Deleted...\n";
        front = front->next;
    }
};

class Circular_Queue_Array
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Circular_Queue_Array(int cap)
    {
        this->size = cap;
        this->arr = new int[cap];
        this->front = -1;
        this->rear = -1;
    }

    // if Empty
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }

    // if Full
    bool isFull()
    {
        return front == (rear + 1) % size;
    }

    // adding new Item
    void enque(int data)
    {
        if (isFull())
        {
            cout << "Queue is Full..\n";
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        arr[rear] = data;
    }

    // print Queue Items
    void Display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to Dispaplay..\n ";
            return;
        }
        do
        {
            cout << arr[front] << " ";
            front = (front + 1) % size;
        } while (front != (rear + 1) % size);
        cout << endl;
    }

    // deleting items
    void deque()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty...Nothing to Delete...\n";
            return;
        }

        if (front == rear)
        {
            front = rear = 0;
        }

        cout << arr[front] << " is Deleted...\n";
        arr[front] = 0;
        front++;
    }
};

int main()
{
    cout << "-------------Circular Queue-----------------\n";
    Circular_Queue_Array cq(3);
    cq.Display();
    cq.enque(10);
    cq.enque(20);
    cq.enque(30);
    cq.deque();
    cq.enque(300);
    cq.Display();
    cout << "---------Queue using Array---------------\n";
    QueueArray q(4);
    q.Display();
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.deque();
    q.Display();

    cout << "---------Queue using Linked List---------------\n";
    Queue_LL ql;
    ql.Display();
    ql.enque(10);
    ql.enque(20);
    ql.enque(30);
    ql.deque();

    ql.Display();
    return 0;
}