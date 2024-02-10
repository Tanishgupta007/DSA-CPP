/*
123
456
789
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 3;
    int counting = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << counting<<" ";
            counting += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}