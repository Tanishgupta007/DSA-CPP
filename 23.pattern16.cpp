/*
ABC
BCD
CDE
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 3;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A'+i-j;
        while (j <= n)
        {
            cout << ch;
            ch += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}