// hollow triangle practice
/*
    *
   * *
  *   * 
 *     *
*       *
 *     * 
  *   *
   * *
    * 
*/

#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < (2*i)+1; k++)
        {
            if (k == 0 || k == (2*i))
            {
                cout<<"*";
            }else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }

    // -------------down triangle-----------------
    for (int i = 1; i < size; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout<<" ";
        }
        for (int k =(size-i)*2-1; k >= 1; k--)
        {
            if (k == 1 || k == (size-i)*2-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
    
}