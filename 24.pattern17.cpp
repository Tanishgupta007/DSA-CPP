/*
     *
    **
   ***
  ****
 *****
 */

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 5;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        int j = 1;
        while (j<=i)
        {  
            cout<<"*";
            j+=1;
        }

        cout << endl;
        i += 1;
    }
}