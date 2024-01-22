#include <iostream>
using namespace std;

int minArray(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {6, 8, 5, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = minArray(arr, n);
    cout << "Min: " << res << endl;

    return 0;
}



