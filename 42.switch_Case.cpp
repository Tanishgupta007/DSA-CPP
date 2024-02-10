#include <iostream>
using namespace std;

int main()
{
    int num = 21;
    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;
    case 2:
        cout << "Second" << endl;
        break;
    default:
        cout << "default";
        break;
    }
}