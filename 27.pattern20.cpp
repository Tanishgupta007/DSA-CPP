/*
1111
 222
  33
   4
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 5;
    while (i <= n)
    {
        int space = i - 1;

        while (space)
        {
            cout << " ";
            space -= 1;
        }
        int j = 1;
        while (j <= n - i)
        {
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}