#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top, size, capacity;

public:
    Stack(int cap)
    {
        this->capacity = cap;
        this->size = 0;
        this->arr = new int[capacity];
        this->top = -1;
    }

    // if Empty
    bool isEmpty()
    {
        return top == -1;
    }

    // if Full
    bool isFull()
    {
        return top == capacity;
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack is OverFlow...\n";
            return;
        }
        if (isEmpty())
        {
            top = 0;
        }

        cout << val << " added at index: " << top<<endl;
        arr[top] = val;
        top++;
        size++;
    }

    // print

    void dispaly()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty...Nothing to Display...\n";
            return;
        }
        int temp = top;
        for (int i = 0; i < size; i++)
        {
            cout << arr[temp-1] << " ";
            temp--;
        }
        cout << endl;
    }

    //delete
    void pop(){
        if (isEmpty())
        {
            cout<<"Stack is Empty..Nothing to POped...\n";
            return;
        }
        cout<<arr[top-1]<<" is POPed..\n";
        // arr[top]=0;
        top--;
        size--;
    }
};
int main()
{
    Stack s(5);
    s.dispaly();
    s.pop();
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(60);
    s.dispaly();

    
    return 0;
}