#include <iostream>
using namespace std;

// Queue Implementation using array
class Queue
{
    int front, rear, size;
    int *arr;

public:
    Queue(int cap)
    {
        this->size = cap;
        arr = new int[size];
        front = -1;
        rear = -1;
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

    // display Queue items
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to Display..\n";
            return;
        }
        cout << "---------Queue Elements---------------\n";
        int i = front;
        do
        {
            cout << arr[i] << " ";
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
        cout << endl;
    }
    // insert new item to Queue:
    void enque(int data)
    {
        if (isFull())
        {
            cout << "Queue is Full..can't add more\n";
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
        cout << data << " added at: " << rear << endl;
        ;
    }

    // Removing items from the Queue
    void deque()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to DLEETED...\n";
            return;
        }
        cout << "Poped value: " << arr[front];
        arr[front] = 0;
        front++;
    }
};
int main()
{
    Queue q(4);
    cout << "Empty: " << q.isEmpty();
    cout << "\nFull: " << q.isFull();
    cout << endl;
    q.display();

    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(40);
    q.display();

    return 0;
}
