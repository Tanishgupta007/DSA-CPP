// Reverse Pyramid pattern
/*

*********
 *******
  *****
   ***
    *
 
*/
#include <iostream>
using namespace std;

int main()
{
    int size = 5;

    for (int i = 0; i < size + 1; i++)
    {
        for (int j = 2; j < i + 2; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (size - i)+1; k++)
        {
            cout << "*";
        }
        for (int t = 0; t < size - i; t++)
        {
            cout << "*";
        }
        cout << endl;
    }
}