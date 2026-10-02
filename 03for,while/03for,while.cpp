
using namespace std;
#include <iostream>

int main()
{		
		/*while (i <= 100)
		{
			cout << i << endl;
			i++;
		}*/

		/*int i = 1;
		while (i < 200)
		{
			if (i % 2 == 0)
			{
				cout << i << endl;
				i++;
			}
			else
			{
				i++;
			}
		}*/
		/*int n;
		cout << "Enter count (N): ";
		cin >> n;

		int c = 0;
		int sum = 0;

		while (c < n)
		{
			int num;
			cout << "Enter number: ";
			cin >> num;

			if (num % 2 == 0)
			{
				sum += num;
			}

			c++;
		}

		cout << "Sum number = " << sum << endl;*/
		/*int num;
		int s = 0;
		int sum = 0;
		while (s <= 10)
		{
			cout << "Enter number" << endl;
			cin >> num;
			s++;
			sum += num;
		}

		cout << sum << endl;
		int sr = sum / 2;
		cout << sr << endl;*/
		/*int a = 100;
		do
		{
			cout << a << endl;
			a--;
		} while (a > 0);*/
		/*int num = 0;
		int sum = 0;
		int couts = 0;*/

		/*do
		{
			cout << "Enter number" << endl;
			cin >> num;
			sum += num;
			couts++;
		} while (couts < 7);
		cout << sum;*/
		/*int b;
		int num;
		int sum = 0;
		for (b = 1; b > 0; b++)
		{
			cout << "Enter the number" << endl;
			cin >> num;
			if (num == 0)
			{
				break;
			}
			else {sum += num;}
		}
		cout << "Sum:" << sum << end*/
		//ДОМАШНЯ РОБОТА ЗНИЗУ!
		/*cout << "1." << endl;
		int num = 14;
		while (num <= 123)
		{
			cout << num << endl;
			num++;
		}*/
		/*cout << "3." << endl;
		int n;
		cout << "Enter count (N): ";
		cin >> n;

		int a = 0;


		while (a < n)
		{
			int num;
			cout << "Enter number: ";
			cin >> num;

			if (num < 0)
			{
				cout << num << endl;
			}

			a++;
		}*/
		/*cout << "4." << endl;
		int num = 1;
		int dob = 1;
		int arf = 0;
		int num1;
		while (num <= 8)
		{
			cout << "Enter number" << endl;
			cin >> num1;
			dob *= num1;
			arf += num1;
			num++;

		}
		cout << dob << endl;
		float result = arf / num;
		cout << result << endl;*/
		/*cout << "5." << endl;
		int z = 100;
		do
		{
			if (z % 2 == 0)
			{
				cout << z << endl;
				z--;
			}
			else
			{
				z--;
			}
		} while (z >= 1);*/
		/*cout << "6." << endl;
		int f = 1;
		int num;
		int dob = 1;
		do
		{
			cout << "Enter number" << endl;
			cin >> num;
			dob *= num;
			f++;
		} while (f <= 5);
		cout << dob << endl;*/
		//На додаткові 12 баллів
		
		/*cout << "7." << endl;
		int n = 1;
		int num = 0;
		while (n <= 50)
		{
			if (num % 4 == 0)
			{
				cout << num << endl;
				n++;
				num++;
			}
			else
			{
				n++;
				num++;
			}
		}*/
		/*cout << "8." << endl;
		int n;
		int c = 0;
		cout << "Enter numbers:";cin >> n;
		while (c <= n)
		{
			cout << c << endl;
			c++;
		}*/
		/*cout << "9." << endl;
		int strd;
		int find;
		int num;
		cout << "Enter to diaposon from:";cin >> strd;
		cout << "To";cin >> find;
		cout << "Change:" << endl;
		cout << "Show paired numbers(1):" << endl;
		cout << "Show not paired numbers (2):" << endl;
		cout << "Show numbers,multiples 7 (3)" << endl;
		cin >> num;
		while (num != 1 || num != 2 || num != 3)
		{
			cout << "Change from 1 2 3";
			cin >> num;
		}
		switch (num)
		{
			case 1:
				if (num % 2 == 0)
				{
					cout << num << endl;
				}
			case 2:
				if (num % 2 != 0)
				{
					cout << num << endl;
				}
			case 3:
				if (num % 7 == 0)
				{
					cout << num << endl;
				}
		}*/
		/*cout << "10." << endl;
		int strd;
		int find;
		int sum = 0;
		cout << "Enter to diaposon from:";cin >> strd;
		cout << "To ";cin >> find;
		while (strd <= find)
		{
			sum += strd;
			strd++;
		}
		cout << sum << endl;*/
		/*cout << "11." << endl;
		int num = 0;
		int sum = 0;
		while (true)
		{
			cout << "Enter number" << endl;
			cin >> num;
			sum += num;
			if (num == 0)
			{
				break;
			}
		}
		cout << sum << endl;*/
}
