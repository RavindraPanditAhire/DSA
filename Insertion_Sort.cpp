#include <iostream>
using namespace std;

void Insertion_Sort(int n, int arr[])
{

	for (int i = 1; i < n; i++) // first loop
	{
		int current = arr[i];
		int j = i - 1;
		while (arr[i] > arr[j] && j >= 0) // second loop
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}

	cout << "Sorted Array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{

	int n, arr[n];
	cout << "Enter Array Size: " << endl;
	cin >> n;
	cout << "Enter Array Elements: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Original Array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	Insertion_Sort(n, arr);

	return 0;
}
