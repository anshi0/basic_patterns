#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        char c = 'E';
        for (int j = 0; j <= i; j++)
        {
            char c = 'E' - i;
            cout << c << " ";
        }
        cout << endl;
    }
}