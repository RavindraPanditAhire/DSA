#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minInd = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
            swap(arr[i], arr[minInd]);
        }
    }
}
int main()
{
    int arr[] = {4, 5, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted Array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}