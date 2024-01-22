#include <iostream>
using namespace std;

int searchArray(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {2, 3, 4, 5, 8, 7, 6, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int ind = searchArray(arr, n, key);
    if (ind != -1)
    {
        cout << key << " found at index: " << ind << endl;
    }
    else
    {
        cout << key << " Not Found in Array....\n";
    }

    return 0;
}















