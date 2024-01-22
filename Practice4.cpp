#include <iostream>
using namespace std;

// Node Structure......
struct Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(NULL) {}
};

// Node Repewsenatin of class representing the Stack Data Structure
class LLStack
{
    Node *top;

public:
    LLStack()
    {
        this->top = NULL;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);

        if (top == NULL)
        {
            top = newNode;
            cout << data << " added at top..\n";
            return;
        }
        cout << data << " added at top..\n";
        newNode->next = top;
        top = newNode;
    }

    // display
    void display()
    {
        if (top != NULL)
        {
            Node *temp = top;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "Stack is EMpty......\n";
        }
    }
    // deleting
    void pop()
    {
        if (top != NULL)
        {
            cout << top->data << " is POPED..\n";
            top = top->next;
        }
        else
        {
            cout << " Stack is Empty.. Notihing to DELETED\n";
        }
    }
};
int main()
{
    LLStack s;
    s.display();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    s.pop();
    s.pop();
  
    s.display();
    return 0;
}