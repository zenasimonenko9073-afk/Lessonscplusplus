

#include <iostream>
using namespace std;
int* arrayF(int* arr, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 100;
	}
	return arr;
	
}
int* deleteArray(int* arr, int& size)
{
	int* arr2 = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		*(arr2 + i) = *(arr + i);
		cout << *(arr2 + i) << " ";
	}
	delete[] arr;
	size--;
	return arr2;
}
int main()
{
	/*int* a = new int(5);
	float* b = new float(3.67);
	double* c = new double(7.5);
	float res = *a * *b * *c;
	cout << *a << endl;
	cout << *b << endl;
	cout << *c << endl;
	cout << res << endl;
	delete a, b, c;*/
	int size = 5;
	int* arr = new int[size];
	arrayF(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
	deleteArray(arr, size);
	
}
	
		
