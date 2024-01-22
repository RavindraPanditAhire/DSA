// Hash_table
#include <iostream>
using namespace std;

int maxArray(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{

    int arr[] = {2, 5, 8, 6, 4, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = maxArray(arr, n);
    cout << "Max: " << res << endl;

    return 0;
}