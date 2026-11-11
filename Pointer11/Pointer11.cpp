
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
	for (int i = 0; i < 255; i++)
	{
		cout << "[" << i << "] - " << (char)i << endl;
	}
}