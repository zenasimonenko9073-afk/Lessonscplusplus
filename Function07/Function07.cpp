
#include <iostream>
using namespace std;
void Hello();

void Star(int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
int main()
{
    Hello();
    Hello();
    Hello();
    Star(20);
}
void Hello()
{
    cout << "Hello" << endl;
}
