#include <iostream>
#include <math.h>
using namespace std;

int decBinary(int n1)
{
    int answer = 0;
    int i = 0;
    while (n1 != 0)
    {
        int bit = n1 & 1;
        answer = (bit * pow(10, i)) + answer;
        n1 = n1 >> 1;
        i += 1;
    }
    return answer;
}
int setBits(int num)
{
    int n1 = decBinary(num);
    int count = 0;
    while (n1 != 0)
    {
        int digit = n1 % 10;
        n1 = n1 / 10;
        if (digit == 1)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout<<decBinary(n1)<<endl;
    cout << "Enter n2: ";
    cin >> n2;
    cout<<decBinary(n2)<<endl;
    int total = setBits(n1) + setBits(n2);
    cout << total;


}