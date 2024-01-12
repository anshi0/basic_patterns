#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        //if (i <= 5)
        //{
            // left top
            for (int j = 1; j <= 5 - i + 1; j++)
            {
                cout << "*";
            }
            // top space
            for (int k = 3; k <= 2 * i ; k++)
            {
                cout << " ";
            }
            // left top
            for (int l = 1; l <= 5 - i + 1; l++)
            {
                cout << "*";
            }
        //}
        cout << endl;
        for(int i=1; i<=5; i++)
        // lower part
        //if (i > 5)
        //{
            // left bottom
            for (int j = 1; j <= i - 5; j++)
            {
                cout << "*";
            }
            // mid space
        //}
    }
    return 0;
}