#include <iostream>
using namespace std;

// linear sort
void linearSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}


int main()
{
    int arr[] = {4, 1, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    linearSort(arr, n);

    cout << "Sorted Array \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}