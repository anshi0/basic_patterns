#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char c = 'A' + i;
            cout << c << " ";
        }
        cout << endl;
    }
}