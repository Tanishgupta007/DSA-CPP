/*
~ -> NOT
^ -> XOR
| -> OR
& -> AND
>> -> RIGHT SHIFT
<< -> LEFT SHIFT
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    cout << " a&b: " << (a & b) << endl;
    cout << " a|b: " << (a | b) << endl;
    cout << " a^b: " << (a ^ b) << endl;
    cout << " ~b: " << ~b << endl;
    cout << endl;
    cout << "RS:  " << (19 << 1) << endl;
    cout << "LS:  " << (24 >> 1) << endl;
}