#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (char c = 'E' - i; c <= 'E'; c++)
        {
            cout << c;
        }
        cout << endl;
    }
}