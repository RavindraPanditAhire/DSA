#include <iostream>
using namespace std;

// Implementation of Binary Search Tree

// Node Structure
struct Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(NULL), right(NULL) {}
};

// Binary Search Tree Representation

class BST
{
private:
    Node *root;

    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }

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

    // Searching the Elements:
    Node *search(Node *root, int key)
    {
        if (root == NULL && root->data == key)
        {
            return root;
        }

        if (key < root->data)
        {
            return search(root->left, key);
        }
        return search(root->right, key);
    }

    // Inorder Traversal
    void inOrder(Node *root)
    {
        if (root != NULL)
        {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
    }

    // Inorder Traversal
    void preOrder(Node *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }

    // Postorder Traversal
    void postOrder(Node *root)
    {
        if (root != NULL)
        {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
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

    // searching
    bool search(int key)
    {
        return search(root, key) != NULL;
    }

    void inOrder()
    {
        inOrder(root);
        cout << endl;
    }

    void preOrder()
    {
        preOrder(root);
        cout << endl;
    }

    void postOrder()
    {
        postOrder(root);
        cout << endl;
    }
};

int main()
{
    try
    {
        BST t;
        t.insert(50);
        t.insert(30);
        t.insert(20);
        t.insert(40);
        t.insert(70);
        t.insert(60);
        t.insert(80);

        cout << "Inorder Traversal: \n";
        t.inOrder();

        cout << "\nPreorder Traversal: \n";
        t.preOrder();

        cout << "\nPostorder Traversal: \n";
        t.postOrder();

        if (t.search(30))
        {
            cout << "Found in BST...\n";
        }
        else
        {
            cout << " NOt Found in BST.....\n";
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}