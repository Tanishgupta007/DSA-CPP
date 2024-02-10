//Right triangle number pattern

/*
    1
   12
  123
 1234
12345
*/
#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 1; i < size+1; i++)
    {
        for (int k = 0; k < size-i; k++)
        {
            cout<<" ";
        }
        
        for (int j =1; j < i+1; j++)
        {
            cout<<j;
        }
    cout<<endl;        
    }
    
}