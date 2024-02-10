// Right pascal star pattern

/*
*
**
***
****
*****
****
***
**
*
*/

#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // ----------------------
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    
}