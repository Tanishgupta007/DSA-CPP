#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n;

    string str1 = to_string(n);
    int leng = str1.length();
    int sum = 0;
    while (n)
    {
        int prod = 1;
        int digit = n % 10;
        for (int i = 0; i < leng; i++)
        {
            prod *= digit;
        }
        sum+=prod;
        n=n/10;
    }
    
    if (sum == temp)
    {
        cout << "The number is armstrong";
    }
    else
    {
        cout << "The number is not armstrong";
    }
}