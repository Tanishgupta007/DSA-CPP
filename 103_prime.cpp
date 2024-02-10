#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i < 10; i++)
    {

        if (number % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int number;
    cin >> number;

    if (isPrime(number))
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }
}