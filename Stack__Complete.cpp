#include <iostream>
using namespace std;

class Practice
{

    int top;
    int size;
    int *arr;

public:
    Practice(int cap)
    {
        this->size = cap;
        arr = new int[cap];
        this->top = -1;
    }

    // if Empty
    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void push(int data)
    {
        if (isFull())
        {
            cout << "Stack is Full...cannot add More...\n";
            return;
        }

        if (isEmpty())
        {
            top = 0;
        }
        else
        {
            top++;
        }

        arr[top] = data;
        cout << data << " added at " << top + 1 << endl;
    }

    // print satack Elements

    void Display()
    {
        if (isEmpty())
        {
            cout << " Stack is Empty....Nothing to Display...\n";
            return;
        }

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty...Nothing to DELETED...\n";
            return;
        }

        cout << arr[top] << " is Poped..\n";
        arr[top] = 0;
        top--;
    }

    int topItem()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty...\n";
            return -1;
        }

        return arr[top];
    }
};

// Implementing Stack using Linked list

// class for Node Representation
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};

class Stack__LL
{
    Node *top;

public:
    Stack__LL()
    {
        this->top = NULL;
    }

    // if Stack is EMpty

    bool isEmpty()
    {
        return top == NULL;
    }

    // add new node as Top

    void push(int data)
    {
        Node *newNode = new Node(data);

        if (isEmpty())
        {
            top = newNode;
            cout << data << " added as TOP....\n";
            return;
        }
        else
        {
            newNode->next = top;
            top = newNode;
            cout << data << " added as TOP...\n";
        }
    }

    // printing Stack Elelments
    void Display()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty..Nothing to Display..\n";
            return;
        }

        cout << "---------Stack Elements-------------\n";
        Node *temp = top;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != NULL);
    }
};

class Queue{

};
int main()
{
    cout << "\n _----------Stack Using Array---------\n";
    Practice s(4);
    s.Display();
    s.push(10);
    cout << "top: " << s.topItem() << endl;
    s.push(20);
    cout << "top: " << s.topItem() << endl;
    s.push(30);
    cout << "top: " << s.topItem() << endl;
    s.push(40);
    cout << "top: " << s.topItem() << endl;
    s.pop();
    cout << "top: " << s.topItem() << endl;
    s.pop();
    cout << "top: " << s.topItem() << endl;
    s.Display();

    cout << "\n _----------Stack Using Linked List---------\n";
    Stack__LL l;
    l.Display();
    l.push(10);
    l.push(20);
    l.push(30);
    l.Display();

    return 0;
}