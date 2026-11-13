
#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	//int a = 5;
	//int b = 7;

	//int* pa = &a;
	//int* pb = &b;

	//cout << a << endl;
	//cout << pa << endl;
	//cout << b << endl;
	//cout << pb << endl;

	//pb = &a;
	//cout << a << endl;
	//cout << *pa << endl;
	//cout << *pb << endl;
	//*pa *= 2;
	//cout << *pa << endl;
	//cout << *pb << endl;

	//const int size = 10;
	//int arr[size];
	//int* parr = &arr[0];
	//for (int i = 0; i < size; i++)
	//{
	//	*(parr + i) = rand() % 50;
	//	arr[i] = rand() % 50;
	//	cout << arr[i] << " ";
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << *(parr + i) << " ";
	//}
	//cout << parr << endl;
	//cout << *parr << endl;

	/*int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	int res = 0;
	int dob = *pa * *pb * *pc;
	int arf = (*pa + *pb + *pc) / 3;
	if (*pa < *pb and *pa < *pc)
	{
		res = *pa;
	}
	cout << dob << " " << arf << " " << res;*/
	/*int sum = 0;
	const int size = 5;
	int arr[size];
	int* parr = &arr[0];
	for (int i = 0; i < size; i++)
	{
		*(parr + i) = rand() % 50;
		cout << arr[i] << " ";
		sum += arr[i];
	}
	cout << endl;
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "sum == " << sum << endl;*/
	/*for (int i = 0; i < 255; i++)
	{
		cout << "[" << i << "] - " << (char)i << endl;
	}*/
			//DZ
	/*cout << "1." << endl;
	const int size = 5;
	int arr[size] = {5, 16, 3, 43, 90};
	int* pmin = arr;
	int* pmax = arr;
	for (int i = 0; i < size; i++)
	{
		
		if (*(arr + i) < *pmin) pmin = arr + i;
		if (*(arr + i) > *pmax) pmax = arr + i;
	}
	int t = *pmin;
	*pmin = *pmax;
	*pmax = t;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}*/
	cout << "2." << endl;
	const int size = 8;
	int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int* everp = arr;
	int* neverp = arr;
	for (int i = 0; i + 1 < size; i += 2)
	{
		everp = arr + i;
		neverp = arr + i + 1;

		int t = *everp;
		*everp = *neverp;
		*neverp = t;
	}
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
}