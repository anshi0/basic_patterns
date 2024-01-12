#include <iostream>
using namespace std;

int main()
{
    for (int i = 4; i >= 0; i--)
    {
        for (char c = 'A'; c <= 'A' + i; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}