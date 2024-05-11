#include<iostream>
using namespace std;

int main()
{
    int n = 124;

    int sum = 0;

    while (n)
    {
        int digit = n % 10;
        sum = sum+digit;

        n = n / 10;
    }

    cout<<sum;
    
    
}