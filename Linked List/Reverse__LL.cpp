#include <iostream>
using namespace std;

// singly linked list node Structure
// template <typename T>
class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(NULL) {}
};

// class Represent the Singly Linked List with all Operations:
// template <typename T>
class SinglyLL
{
    public:
    Node *head;


    SinglyLL()
    {
        head = NULL;
    }

    // method for displaying data of Linked List:
    void Display()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty..Nothing to Display...\n";
            return;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
    // method for adding NOde at Staring as head
    void addStart(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            cout << data << " added as Head...\n";
            return;
        }
        newNode->next = head;
        head = newNode;
        cout << data << " added as Head...\n";
    }

    // method for adding NOde at Last as Tail
    void addLast(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            cout << data << " added as Tail Node...\n";
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        temp = newNode;
        cout << data << " added as Tail Node...\n";
    }

    // method for adding node at Specific position
    void addArbitarily(int data, int pos)
    {
        Node *newNode = new Node(data);
        int curPos = 1;
        if (head == NULL || pos == curPos)
        {
            head = newNode;
            cout << data << " added Arbitarily at Head...\n";
        }

        Node *temp = head;
        while (curPos != pos - 1)
        {
            temp = temp->next;
            curPos++;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        cout << endl
             << data << " added at Position: " << curPos + 1 << endl;
    }

    // / reversing the Linked List
    Node* reverse(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *prev = NULL;
        Node *current = head;
        while (current != NULL)
        {
            Node *next = head->next;

            current->next = prev;

            prev = current;
            current = next;
        }
        Node *newHead=current;
        return newHead;
    }
};
int main()
{
    SinglyLL l;
    l.Display();
    l.addStart(20);
    l.addStart(15);
    l.addStart(10);
    l.addLast(30);
    l.addLast(40);
    l.addLast(50);
    l.Display();

    l.addArbitarily(100, 2);
    l.Display();

    cout<<"\n reverse Link LISt: \n";
    l.head=l.reverse(l.head);
    l.Display();

    return 0;
}