#include <iostream>
using namespace std;
bool IsEven(int num1)
{
    if (num1 % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cin >> num;
    if (IsEven(num))
    {
        cout << "Number is even";
    }else
    {
        cout << "Number is odd";
        
    }
    
}