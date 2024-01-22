#include <iostream>
using namespace std;

class priorityQueue
{
    int *arr;
    int size;
    int capacity;

public:
    priorityQueue(int cap)
    {
        this->size = 0;
        this->arr = new int[size];
        this->capacity = cap;
    }

    // if Empty
    bool isEmpty()
    {
        return size == 0;
    }

    // if Full
    bool isFull()
    {
        return size == capacity;
    }

    // adding element in order
    void enque(int element)
    {
        if (isFull())
        {
            cout << "Queue is Full....\n";
            return;
        }

        int i;
        for (i = size - 1; i >= 0 && element < arr[i]; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[i + 1] = element;
        cout << element << " added\n";
        size++;
    }

    // deleting elements
    void deque()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty Nothing to DELETED...\n";
            return;
        }
        int front = arr[size - 1];
        size--;
        cout << front << " Deleted...\n";
    }

    // for display queue elements:
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty...Nothing to dispaly....\n";
            return;
        }

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    priorityQueue q(5);
    q.enque(15);
    q.enque(30);
    q.enque(2);
    q.enque(5);;
    q.enque(100); 
    q.deque();
    q.display();
    return 0;
}