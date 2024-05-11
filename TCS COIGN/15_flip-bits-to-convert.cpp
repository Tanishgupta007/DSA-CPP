#include <iostream>
using namespace std;

int main()
{
    cout<<8/7;  
    int n;
    cin >> n;

    int msb = 0;

    int temp = n;
    while (temp > 0)
    {
        msb++;
        temp = temp >> 1;
    }
    int mask = 1 << msb;

    int flip = n ^ (mask - 1);

    cout << flip;
}