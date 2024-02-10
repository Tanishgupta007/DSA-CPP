// Reverse pyramid number pattern
/*
123456789
 1234567
  12345
   123
    1
*/

#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for (int k = 1; k < i+1; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2*(size-i)-1; j++)
        {
            cout<<j+1;
        }
        
        cout<<endl;
    }
    
}