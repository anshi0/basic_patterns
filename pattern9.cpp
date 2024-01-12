#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 2; k <= 5 - i + 1; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i <= 5; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        // 2n-(2i+1)
        for (int j = 1; j <= 10 - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}