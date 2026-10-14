
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    /*int a;
    
    srand(time(0));
    a = rand();
    cout << a << endl;
    a = rand();
    cout << a << endl;
    a = rand();
    cout << a << endl;

    for (int i = 0; i < 10; i++)
    {
        a = rand() % 10;
        cout << a << " ";
    }
    for (int i = 0; i < 30; i++)
    {
        a = rand() % 90 + 10;
        cout << a << " ";
    }*/
    
    
    srand(time(0));
    int array[4][3];
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = rand() % 21 - 10;
            cout << setw(5) << array[i][j];
            if (array[i][j] != 0)
                count++;
        }
        cout << endl;
    }
    cout << count << endl;

    /*srand(time(0));
    int array[3][3];
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = rand() % 21 - 10;
            cout << setw(5) << array[i][j];
            if (array[i][j] == 0)
                count++;
        }
        cout << endl;
    }
    cout << count << endl;*/
    
    /*srand(time(0));
    int array[7][3];
    int count = 0;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = -20 + rand() % 40;
            cout << setw(5) << array[i][j];
            if (array[i][j] < 12)
                count++;
        }
        cout << endl;
    }
    cout << count << endl;*/
    
    /*srand(time(0));
    int array[4][5];
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = -20 + rand() % 40;
            cout << setw(5) << array[i][j];
            if (array[i][j] > 0)
                count++;
        }
        cout << endl;
    }*/
   /* cout << count << endl;*/
    
    /*srand(time(0));
    float array[5][4];
    
    int dob = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = -20 + rand() % 40;
            cout << setw(5) << array[i][j];
            if (array[i][j] > 0)
                dob *= array[i][j];
        }
        cout << endl;
    }
    cout << dob << endl;*/
    
    /*srand(time(0));
    float array[5][4];
    
    int dob = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = -20 + rand() % 40;
            cout << setw(5) << array[i][j];
            if (array[i][j] < 0)
                dob *= array[i][j];
        }
        cout << endl;
    }
    cout << dob << endl;*/
    
    /*srand(time(0));
    int array[4][4];
    
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = -20 + rand() % 40;
            cout << setw(5) << array[i][j];
            if (array[i][j] % 6 == 1)
                count++;
               
        }
        cout << endl;
    }
    cout << count << endl;*/
    
    /*srand(time(0));
    int array[5][6];
    int min = 100;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            array[i][j] = -20 + rand() % 40;
            cout << setw(5) << array[i][j];
            if (array[i][j] < min)
                min = array[i][j];
        }
        cout << endl;
    }
    cout << min << endl;*/
    
    /*srand(time(0));
    int array[5][6];
    int max = -100;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            array[i][j] = -20 + rand() % 40;
            cout << setw(5) << array[i][j];
            if (array[i][j] > max)
                max = array[i][j];
        }
        cout << endl;
    }
    cout << max << endl;*/
    
    /*srand(time(0));
    int array[5][4];
    int sum = 0;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = -20 + rand() % 40;
            cout << setw(5) << array[i][j];
            if (array[i][j] < 0)
                sum += array[i][j];
        }
        cout << endl;
    }
    cout << sum << endl;*/

}

