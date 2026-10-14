
#include <iostream>
using namespace std;

int main()
{
    
	Factorial(5);
}

int Factorial(int number)
{
	int res = 1;	
	
	for (int i = 1; i <= number; i++)
	{
		res *= i;
	}
	cout << res << endl;
}