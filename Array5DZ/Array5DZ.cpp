
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Dz Array 05
	/*const int size = 10;
	int arr[size];
	int dob = 1;
	for (int i = 0; i < size; i++)
	{

		cin >> arr[i];
		dob *= arr[i];
	}

	cout << dob;*/

	/*srand(time(0));
	int array[7];
	int count = 0;
	int ancount = 0;
	for (int j = 0; j < 7; j++)
	{
		array[j] = rand() % 63 - 12;
		cout << setw(5) << array[j] << endl;
		if (array[j] > 0)
			count++;
		else if (array[j] < 0)
			ancount++;
	}
	cout << count << endl;
	cout << ancount << endl;*/

	/*long arr[7]{ 3, 5, 10, 7, 8, 2, 1 };
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		sum += arr[i];
	}
	cout << sum;*/

	/*int arr[10];
	int step = 1;
	for (int i = 0; i < 10; i++)
	{
		step = 2 << i;
		arr[i] = step;
		cout << arr[i] << " ";

	}
	cout << "\n\n";
	for (int i = 9; i > 0; i--)
	{

		cout << arr[i] << " ";

	}*/

	/*srand(time(0));
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 21 - 10;
		
		if (arr[i] < 0) arr[i] = arr[i] * -1;
		
		cout << arr[i] << " ";
	}*/
}