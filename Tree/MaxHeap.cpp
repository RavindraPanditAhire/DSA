#include <iostream>
using namespace std;

class HeapTree
{

public:
    int size;
    int arr[50];
    HeapTree()
    {
        size = 0;
        // arr[size] = -1;
    }
    // inserting

    void insert(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;
        int parent = index / 2;
        while (index > 1 && arr[parent] < arr[index])
        {
            swap(arr[parent], arr[index]);
            index = parent;
        }
    }

    // dipslay
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // deleting

    void remove()
    {

        // swap values of root and last node
        arr[1] = arr[size];
        // delete last Node
        size--;

        // taking current root to its correct Position
        int curIndex = 1;
        while (curIndex < size)
        {
            // get left child index
            int lIndex = 2 * curIndex;
            // get right child Index
            int rIndex = 2 * curIndex + 1;

            // check if curRoot is less than left child
            if (arr[curIndex] < arr[lIndex])
            {
                swap(arr[curIndex], arr[lIndex]);
                curIndex = lIndex;
            }
            // check if curRoot is less than right child
            else if (arr[curIndex] < arr[rIndex])
            {
                swap(arr[curIndex], arr[rIndex]);
                curIndex = rIndex;
            }
            // nothing to do anything
            else
            {
                return;
            }
        }
    }
};
int main()
{
    HeapTree h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    // h.remove();
    h.print();
    return 0;
}