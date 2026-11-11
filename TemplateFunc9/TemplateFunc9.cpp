
#include <iostream>
using namespace std;
//template <typename T>
//T Maxarr(T arr[], T size)
//{
//    int maxV = arr[0];
//
//	for (int  i = 0; i < size; i++)
//	{
//		if (arr[i] > maxV) maxV = arr[i];
//	}
//	return maxV;
//}
//template <typename T>
//T Maxar(T arr[][4], T size, T size1)
//{
//    int maxV = arr[0][0];
//
//	for (int  i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size1; j++)
//		{
//			if (arr[i][j] > maxV) maxV = arr[i][j];
//		}
//	}
//	return maxV;
//}
int Sqmatr(int arr[][3], int size)
{
	int max = arr[0][0];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			
			if (arr[i][j] > max) max = arr[i][j];
		}
		
	}
	return max;
}
float Sqmatr(float arr[][3], float size)
{
	int max = arr[0][0];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			
			if (arr[i][j] > max) max = arr[i][j];
		}
		
	}
	return max;
}
char Sqmatr(char arr[][3], char size)
{
	int max = arr[0][0];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			
			if (arr[i][j] > max) max = arr[i][j];
		}
		
	}
	return max;
}
int main()
{
	/*int ar1[4][4] = {	{0, 1, 4, 3},
						{ 5, 3, 2, 1},
						{0, 2, 8, 1},
						{3, 1, 5, 2}	};
	
	cout << Maxar(ar1, 4, 4);*/
	int arr[3][3] = { 
						{5, 3, 2},
						{0, 2, 8},
						{3, 1, 5}	};
	cout << Sqmatr(arr, 3);
}
