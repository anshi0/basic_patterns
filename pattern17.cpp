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
        // the no. of characters will be 2*i -1
        char c = 'A';
        int breakpoint = (2 * i - 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << c;
            if (j <= breakpoint)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        /*for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }*/
        for (int k = 2; k <= 5 - i + 1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}