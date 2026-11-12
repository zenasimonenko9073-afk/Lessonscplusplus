#include <iostream>
using namespace std;
int Sort(int arr[], int size, int border = 1)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (border == 1 && arr[j] < arr[j + 1] || (border == 0 && arr[j] > arr[j + 1])) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				cout << arr[j] << " ";
			}
		}
	}
	return 1;
}
int main()
{
	const int size = 10;
	int arr[size] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

	cout << Sort(arr, size) << endl;
}