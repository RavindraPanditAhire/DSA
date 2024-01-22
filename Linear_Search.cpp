#include <iostream>
using namespace std;

void Linear_Search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element Present at Index: " << i << endl;
            break;
        }
    }
}
int main()
{
    int n, arr[n], key;
    cout << "Enter the Array Size: " << endl;
    cin >> n;
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Enter Key that you Searching for: " << endl;
    cin >> key;

    Linear_Search(arr, n, key);
    return 0;
}
