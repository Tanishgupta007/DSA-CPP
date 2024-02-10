// Diamond number pattern
/*
    1
   123 
  12345
 1234567
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
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<k+1;
        }
        cout<<endl;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*(size-i)-1; k++)
        {
            cout<<k+1;
        }
        cout<<endl;
    }
    
}