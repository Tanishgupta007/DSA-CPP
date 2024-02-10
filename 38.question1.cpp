#include <iostream>
using namespace std;

int main()
{
    // Question 1
    /*
    for (int i = 0; i <= 5; i++)
    {
        cout<<i<<endl;
        i++;
    }
    */
    // Question 2

    /*
    for (int i = 0; i <= 5; i--)
    {
        cout<<i<<endl;
        i++;
    }
    */

    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <=5; j++)
    //     {
    //         cout<<i<<" "<<j<<endl;
    //     }

    // }
}