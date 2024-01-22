#include <iostream>
using namespace std;

void insert(int arr[], int n, int data)
{
    n = n + 1;
    arr[n] = data;
    int i = n;
    while (i >= 1)
    {
        int parent = i / 2;
        if (arr[parent] < arr[i])
        {
            swap(arr[parent], arr[i]);
            i = parent;
        }
        else
        {
            return;
        }
    }
}

// Heapify Algorithm

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int lIndex = 2 * i;
    int rIndex = 2 * i + 1;

    if (lIndex < n && arr[largest] < arr[lIndex])
    {
        largest = lIndex;
    }

    if (rIndex < n && arr[largest] < arr[rIndex])
    {
        largest = rIndex;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
int main()
{
    int arr[] = {12, 10, 9, 8, 7, 6};
    cout << "After Heapify: \n";
    int nn = 6;
    for (int i = nn / 2; i > 0; i--)
    {
        heapify(arr, nn, i);
    }

    for (int i = 0; i < nn; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int n = sizeof(arr) / sizeof(arr[0]) + 1;
    cout << "Before: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insert(arr, n, 11);
    // insert(arr, n, 5);

    cout << "After: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
