#include <iostream>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(NULL) {}
};

class CircularLL
{
    Node *head;

public:
    CircularLL()
    {
        head == NULL;
    }

    void addStart(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            newNode->next = head;
            head = newNode;
            cout << data << " added as Head Node..\n";
        }
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
        cout << data << " added as Head Node..\n";
    }

    void Display()
    {
        if (head == NULL)
        {
            cout << "List is Empty..\n";
            return;
        }

        else
        {
            Node *temp = head;
            do
            {
                cout << temp->data << " ";
                temp = temp->next;
            }

            while (temp != head);

            cout << endl;
        }
    }
};

int main()
{
    CircularLL l;
    l.Display();
    l.addStart(20);
    l.addStart(10);
    l.Display();
    return 0;
}