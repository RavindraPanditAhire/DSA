#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data):data(data),left(NULL),right(NULL){}
};

class BST{
    Node* head;
    public:
    BST(){
        head=NULL;
    }

    Node* createBST(int* arr){
        Node* root=new Node(arr[0]);
        int n=sizeof(arr)/sizeof(arr[0]);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > root->data)
            {
                root->right=new Node(arr[i]);
            }
            else{
                root->left=new Node(arr[i]);
            }
        }
        return root;
    }

    void inOrder(Node* root){
        if (root != NULL)
        {
            inOrder(root->left);
            cout<<root->data<<" ";
            inOrder(root->right);
        }
        
    }

};
int main(){

    BST b;
    int arr[]={5,1,3,4,2,7};
    
    b.createBST(arr);
    Node* root=new Node(arr[0]);
    cout<<"\n inorder traversal of tree: \n";
    b.inOrder(root);

    return 0;
}