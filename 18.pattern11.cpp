/*AAA
BBB
CCC*/
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 3;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch<< " ";
            j += 1;
        }
        cout << endl;

        i += 1;
    }
}
/*
int main()
{
    int i = 1;
    int n = 3;
    char val = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << val << " ";
            j += 1;
        }
        cout << endl;
        val += 1;

        i += 1;
    }
}
*/