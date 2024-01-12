#include <iostream>
using namespace std;
int main()
{
    int start = 1;
    int j;
    for (int i = 1; i <= 5; i++)
    {
        /*if((i+j)%2 ==0){
         start = 1;
        }
        else {
         start = 0;
        }*/
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                start = 1;
            }
            else
            {
                start = 0;
            }
            cout << start;
        }
        cout << endl;
    }
    return 0;
}