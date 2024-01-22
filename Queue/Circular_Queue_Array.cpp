#include <iostream>
using namespace std;

class CircularQueue
{
    int size, front, rear;
    int *arr;

public:
    CircularQueue(int cap)
    {
        this->size = cap;
        this->front = -1;
        this->rear = -1;
        arr = new int[size];
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

    // print Queue
    void print()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to Display..\n";
            return;
        }
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
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

        cout << data << " added..\n";
    }

    // deleting item
    void deque()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to Display...\n";
            return;
        }

        if (front == rear + 1)
        {
            front = rear = 0;
        }

        cout << arr[front] << " is Deleted...\n";
        arr[front] = 0;
        front = front + 1;
    }
};
int main()
{
    CircularQueue q(3);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(30);
    q.deque();
    q.deque();
    q.deque();
    q.enque(30);
    q.print();
    return 0;
}