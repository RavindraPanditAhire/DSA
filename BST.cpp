
#include <iostream>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int value) : data(value), left(NULL), right(NULL) {}
};

class BST
{
    Node *root;
    Node *insert(Node *root, int data)
    {
        // Node *newNode = new Node(data);
        if (root == NULL)
        {
            return root = new Node(data);
        }

        // compared value with existing parent

        if (data < root->data)
        {
            root->left = insert(root->left, data);
        }
        else if (data > root->data)
        {
            root->right = insert(root->right, data);
        }
        return root;
    }

    // find Minimum value
    Node *findMin(Node *root)
    {
        while (root->left != NULL)
        {
            root = root->left;
        }
        return root;
    }

    // inOrder Traversal
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

    // delete specific
    Node *deleteItem(Node *root, int nodeValue)
    {
        if (root->data == nodeValue)
        {
            /* code */
        }
    }

public:
    BST()
    {
        this->root = NULL;
    }

    void insert(int data)
    {
        root = insert(root, data);
    }

    void inOrder()
    {
        cout << "\n Inorder: \n";
        inOrder(root);
    }

    void findMin()
    {
        Node *min = findMin(root);
        cout << "\nMin: " << min->data << endl;
    }
};

int main()
{
    BST t;

    t.insert(50);
    t.insert(20);
    t.insert(30);
    // t.insert(40);
    // t.insert(10);
    // t.insert(40);
    // t.insert(60);

    t.inOrder();
    t.findMin();
    cout << endl;
    return 0;
}