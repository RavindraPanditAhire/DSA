#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data):data(data),next(NULL),prev(NULL){}
};
int main(){

    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->prev= head->next;
    head->next->next=new Node(30);
    head->next->next->prev= head->next->next;
    cout<<"head:next:prev: "<<head->next->prev->prev->data;

    return 0;
}