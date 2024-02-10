#include <iostream>
using namespace std;

int main()
{
    int a, b, res;
    char op;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter num2: ";
    cin >> b;

    switch (op)
    {
    case '+':
        res = a + b;
        cout << res << endl;
        break;
    case '-':
        res = a - b;
        cout << res << endl;
        break;
    case '/':
        res = a / b;
        cout << res << endl;
        break;
    case '*':
        res = a * b;
        cout << res << endl;
        break;
    case '%':
        res = a % b;
        cout << res << endl;
        break;
    default:
        cout << "Please enter valid input";
        break;
    }
}