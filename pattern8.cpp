#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int k = 0; k <= i; k++)
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