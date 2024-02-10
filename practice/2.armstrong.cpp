#include <iostream>
using namespace std;

int armstrong(int n)
{
    int p = 0;
    while (n > 0)
    {
        int digit = n % 10;
        p = (p) + (digit * digit * digit);
        n = n / 10;
    }
    return p;
}
int main()
{
    int n;
    cin >> n;

    if (n == armstrong(n))
    {
        cout << "yes";
    }
    else
    {
        cout<< "no";
    }
}