#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};

class StackLL
{
    Node *top;

public:
    StackLL()
    {
        this->top = NULL;
    }

    // add
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (top == NULL)
        {
            newNode->next = top;
            top = newNode;
            cout << data << " is Added...\n";
            return;
        }
        Node *temp = top;
        newNode->next = temp;
        top = newNode;
        cout << data << " is Added...\n";
    }

    // print
    void dispaly()
    {
        if (top == NULL)
        {
            cout << "Stack is EMpty...Nothing to Display...\n";
            return;
        }

        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    StackLL s;
    s.dispaly();
    s.push(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.dispaly();
    return 0;
}