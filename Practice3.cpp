#include <iostream>
using namespace std;

// Implementing Stack using Array
class Stack
{
    int top, size;
    int *arr;

public:
    Stack(int cap)
    {
        this->size = cap;
        top = -1;
        arr = new int[size];
    }

    // if Empty
    bool isEmpty()
    {
        return top == -1;
    }

    // if Full
    bool isFull()
    {
        return top == size;
    }
    // display
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty.....\n";
            return;
        }
        // int i=top;
        do
        {
            cout << arr[top - 1] << " ";
            top--;
        } while (top != 0);
    }

    // adding
    void push(int data)
    {
        if (isFull())
        {
            cout << "Stack Overflow......\n";
            return;
        }
        if (isEmpty())
        {
            top = 0;
        }

        cout << data << " added at: " << top << endl;
        arr[top] = data;
        ++top;
    }

    // deleting
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty...\n";
            return;
        }
        cout << arr[top - 1] << " is Poped..\n";
        top--;
    }
};

int main()
{
    Stack s(3);
    s.display();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(40);
    s.pop();
    s.display();
    return 0;
}