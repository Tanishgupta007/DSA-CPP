/*
 *
 ***
 *****
 */

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int i = 0;
    while (i < n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        int j = 1;
        int num = 1;
        while (j <= 2 * i + 1)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}