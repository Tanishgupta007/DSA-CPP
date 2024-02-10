#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int answer = 0;
    int i = 0;
    while (num != 0)
    {
        int bit = num & 1;
        answer = (bit * pow(10, i)) + answer;
        num = num >> 1;
        i+=1;
    }
    cout << answer;
}