#include <iostream>
using namespace std;

struct Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(NULL), right(NULL) {}
};

class BST
{
    Node *root;
    Node *add(Node *root, int data)
    {
        Node *newNode = new Node(data);

        if (root == NULL)
        {
            return root = new Node(data);
        }

        if (data < root->data)
        {
            root->left = add(root->left, data);
        }
        else if (data > root->data)
        {
            root->right = add(root->right, data);
        }

        return root;
    }

    // traversing
    void inOrder(Node *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            inOrder(root->left);
            // cout << root->data << " ";
            inOrder(root->right);
        }
    }

public:
    BST()
    {
        this->root = NULL;
    }

    void insert(int data)
    {
        root = add(root, data);
    }

    void Display()
    {
        inOrder(root);
    }
};
int main()
{
    BST t;
    t.Display();

    t.insert(50);
    t.insert(40);
    t.insert(30);
    t.insert(10);
    t.insert(100);
    t.Display();

    return 0;
}