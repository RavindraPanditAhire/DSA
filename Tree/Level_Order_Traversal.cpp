#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) : data(data), left(NULL), right(NULL) {}
};

class BST
{
    Node *root;

public:
    BST()
    {
        this->root = NULL;
    }

    /// Level Order Traversing
    static void levelOrderTraversal(Node *root)
    {
        if (root == NULL)
        {
            cout << "Bst has No more Nodes to Traverse...\n";
            return;
        }

        queue<Node *> q;
        q.push(root);

       while (! q.empty())
       {
         Node *curent = q.front();
        cout << curent->data << " ";
        q.pop();

        if (curent->left != NULL)
        {
            q.push(curent->left);
        }

        if (curent->right != NULL)
        {
            q.push(curent->right);
        }
       }
       
    }
};
int main()
{

    BST t;

    Node *root = new Node(50);

    root->left = new Node(40);
    root->right = new Node(60);

    root->left->left = new Node(20);
    root->left->right = new Node(45);

    root->right->left = new Node(55);
    root->right->right = new Node(70);

    cout << "Level Order Traversal: \n";
    t.levelOrderTraversal(root);

    return 0;
}