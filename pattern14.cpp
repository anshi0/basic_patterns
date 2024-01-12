#include <iostream>
using namespace std;

int main()
{
    // prints very good emoji pattern
    /* for(int i=1; i<=5; i++){
         for(char c=0; c<='A'+i; c++){
             cout<<c;
         }
         cout<<endl;
     }*/
    for (int i = 0; i < 5; i++)
    {
        for (char c = 'A'; c <= 'A' + i; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}