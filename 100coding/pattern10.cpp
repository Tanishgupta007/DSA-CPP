// Hollow pyramid pattern
/*
    *
   * *
  *   *
 *     *
********* 
*/


#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        int j;
        for ( j = 1; j < size-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < i+1; k++)
        {
            if (i == 0 || i == size-1)
            {
                cout<<"*";
            }else
            {
                if (k == 0)
                {
                    cout<<"*";
                }else
                {
                    cout<<" ";
                }    
            }
        }
        for (int t = 0; t < i; t++)
        {
            if (i == 1 || i == size-1)
            {
                cout<<"*";
            }else
            {
                if (t == i-1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }        
        }

        
        cout<<endl;
    }
}