#include <iostream>
using namespace std;

// LinkedList Implmementation with all Operations:

struct Node
{
public:
    Node *next;
    int data;
    Node(int value) : data(value), next(NULL) {}
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        this->head = NULL;
    }

    // add new Node at Starting of head
    void addStart(int data)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            cout << data << " is added as Head...\n";
            return;
        }
        newNode->next = head;
        head = newNode;
        cout << data << " is Added as Head...\n";
    }

    void addLast(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            cout << data << " is Added at Last...\n";
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        temp = newNode;
        cout << data << " added at Last...\n";
    }

    void Display()
    {
        if (head == NULL)
        {
            cout << " Linked list Empty...\n";
            return;
        }

        Node *temp = head;
        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != NULL);
        cout << "NULL";
    }

    void addArbitrarily(int data, int position)
    {
        Node *newNode = new Node(data);
        int curPos = 1;
        if (position == 1)
        {
            addStart(data);
            return;
        }
        Node *temp = head;
        while (curPos != position)
        {
            temp = temp->next;
            curPos++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
};
int main()
{
    LinkedList l;
    l.Display();
    l.addStart(10);

    l.addStart(20);
    l.addLast(30);
    l.addArbitrarily(100, 3);
    l.Display();
    return 0;
}