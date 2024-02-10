// Number pyramid pattern
/*
    1
   123
  12345
 1234567
123456789
*/

#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 1; i < size+1; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < (i*2)-1; k++)
        {
            cout<<k+1;
        }
        
        cout<<endl;
    }
    
}