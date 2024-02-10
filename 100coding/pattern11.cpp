// Diamond star pattern

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        cout<<endl;        

    }
        // -------------down   
    for (int i = 1; i < size; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < (size-i)*2-1; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}