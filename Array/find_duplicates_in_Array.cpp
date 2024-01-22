#include <set>
#include <iostream>

using namespace std;

void findDuplicates(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    cout << "Unique  Elelments: \n";
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    int arr[] = {2, 1, 4, 2, 3, 5, 1, 3, 2, 6, 5, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    findDuplicates(arr, n);
    return 0;
}