#include <iostream>
using namespace std;

class QueueArray
{
    int *arr;
    int size, front, rear, capacity;

public:
    QueueArray(int cap)
    {
        this->size = 0;
        this->front = -1;
        this->rear = -1;
        this->arr = new int[cap];
        this->capacity = cap;
    }

    // if Empty
    bool isEmpty()
    {
        return size == 0;
    }

    // if FUll
    bool isFull()
    {
        return size == capacity;
    }

    // adding
    void enque(int value)
    {
        if (isFull())
        {
            cout << "Queue is OverFlow...\n";
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        arr[rear] = value;
        cout << value << " added...\n";
        size++;
        rear++;
    }

    // print
    void dispaly()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to Display...\n";
            return;
        }
        for (int i = 0; i < size; i++)
        {
            cout << arr[front] << " ";
            front++;
        }
    }

    // delete
    void dequeu()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty..Nothing to DELETED...\n";
            return;
        }
        cout << arr[front] << " is DELETED...\n";
        
        front++;
        size--;
    }
};
int main()
{
    QueueArray q(3);
    q.dispaly();
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.dequeu();
  
    q.enque(10);
    
    q.dispaly();
    return 0;
}