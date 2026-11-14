
#include <iostream>
#include <iomanip>
using namespace std;
void InitArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}
void ShowArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
}
void FillRow(int* arr, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        arr[i] = rand() % 10;
    }
}
int** AddRowStart(int** arr, int& rows, int cols)
{
    int** temp = new int* [rows + 1];
    temp[0] = new int[cols];
    FillRow(temp[0], cols);
    for (int i = 0; i < rows; i++)
    {
        temp[i + 1] = arr[i];
    }
    
   
    delete[]arr;
    rows++;
    return temp;
}
int** DelRowByPosition(int** arr, int& rows, int cols, int pos)
{
    int** temp = new int* [rows - 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr[pos];
    
    for (int i = pos + 1; i < rows + 1; i++)
    {
        temp[i - 1] = arr[i - 1];
    }
    delete[]arr;
    rows--;
    return temp;
}
//int** AddColEnd(int** arr, int rows, int& cols)
//{
//    int** temp = new int* [rows];
//    for (int i = 0; i < rows; i++)
//    {
//        temp[i] = new int[cols + 1];
//    }
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            temp[i][j] = arr[i][j];
//        }
//    }
//    for (int i = 0; i < rows; i++)
//    {
//        delete[]arr[i];
//    }
//    delete[]arr;
//    for (int i = 0; i < rows; i++)
//    {
//        temp[i][cols] = 5;
//    }
//    cols++;
//    return temp;
//}
void DeleteRowStart(int**& arr, int& rows, int cols)
{
    int** temp = new int* [rows - 1];
    for (int i = 1; i < rows; i++)
    {
        temp[i - 1] = arr[i];
    }
    delete[] arr[0];
    delete[] arr;
    rows--;
    arr = temp;
}
int main()
{
    int rows = 5;
    int cols = 6;
    //cout << "Enter new rows : "; cin >> rows;
    //cout << "Enter new cols : "; cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    InitArray(arr, rows, cols);
    ShowArray(arr, rows, cols);
    arr = AddRowStart(arr, rows, cols);
    ShowArray(arr, rows, cols);

    //arr = AddRowStart(arr, rows, cols);
    //ShowArray(arr, rows, cols);

    

    //arr = AddColEnd(arr, rows, cols);
    //ShowArray(arr, rows, cols);

    //arr = AddColEnd(arr, rows, cols);
    //ShowArray(arr, rows, cols);


    DeleteRowStart(arr, rows, cols);
    ShowArray(arr, rows, cols);

    arr =  DelRowByPosition(arr, rows, cols, 4);
    ShowArray(arr, rows, cols);
    //DeleteRowEnd(arr, rows, cols);
    //ShowArray(arr, rows, cols);

    //DeleteRowEnd(arr, rows, cols);
    //ShowArray(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
}
