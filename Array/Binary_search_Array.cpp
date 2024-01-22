#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        cout << "mid: " << mid << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr[mid] == key)
            {
                return mid;
            }

            if (key > arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 2, 3, 1, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    int res = binarySearch(arr, n, key);
    if (res != -1)
    {
        cout << key << " Found at Index: " << res << endl;
    }
    else
    {
        cout << key << " Not Found in Array....\n";
    }

    return 0;
}
