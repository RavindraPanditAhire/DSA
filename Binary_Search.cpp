#include <iostream>
using namespace std;

void Binary_Search(int arr[], int n, int key)
{
	int s = 0;
	int e = n;
	for (int i = 0; i < n; i++)
	{
		int mid = s + e / 2;
		if (arr[mid] == key)
		{
			cout << "Found at Index: " << mid << endl;
			break;
		}
		else if (arr[mid] > key)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
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

	Binary_Search(arr, n, key);
	return 0;
}
