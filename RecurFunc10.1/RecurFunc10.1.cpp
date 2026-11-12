
#include <iostream>
using namespace std;

//int Pow(int num, int step)
//{
//	if (step == 0) return 1;
//	return num * Pow(num, step - 1);
//
//}
//int Star(int n)
//{
//	if (n <= 0) return 1;
//	cout << "*";
//	Star(n - 1);
//}
int Dia(int a, int b)
{
	if (a > b) return 0;
	if (a == b) return a;
	return a + Dia(a + 1, b);
}
int main()
{
	//cout << Pow(5, 3);
	/*int n;
	cout << "Enter N star: "; cin >> n;
	Star(n);*/
	int a;
	int b;
	cout << "Enter 1 number" << endl;
	cin >> a;
	cout << "Enter 2 number" << endl;
	cin >> b;
	cout << Dia(a, b);
}

