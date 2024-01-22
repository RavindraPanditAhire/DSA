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

// Tree Implementaiton
class Tree
{

public:
    Node *root;
    Tree()
    {
        this->root = NULL;
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
};
int main()
{
    Tree t;
    t.root = new Node(10);
    t.root->left = new Node(20);
    t.root->right = new Node(30);

    t.root->left->left = new Node(40);
    t.root->left->right = new Node(50);

    t.root->right->left = new Node(60);
    t.root->right->right = new Node(70);

    cout << "Inorder Traversal: \n";
    t.inOrder(t.root);

    cout << "\nPostOrder Traversal: \n";
    t.postOrder(t.root);

    cout << "\nPreOrder Traversal: \n";
    t.preOrder(t.root);

    return 0;
}