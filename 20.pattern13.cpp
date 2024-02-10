/*
ABC
DEF
GHI
*/

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 3;
        char val = 'A';

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<val;
            val+=1;
            j+=1;

        }
        cout<<endl;

        i+=1;

    }
    
}