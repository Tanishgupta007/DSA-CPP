#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0};
    // cout << &arr << endl;
    // cout << &arr[0] << endl;
    // cout << arr << endl;

    // arr = arr+1 ;//error
    int *p = arr;

    cout << p << endl;

    p = p + 1;

    cout << p << endl;
} 