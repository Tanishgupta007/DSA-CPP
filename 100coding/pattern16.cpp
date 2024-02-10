// Heart shape pattern
/*
 ***   ***
***** *****
***********
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

    for (int i = 1; i <= size/2; i++)
    {
        for (int j = 1; j < size-i; j+=2)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        for (int t = 0; t < size-i+1; t++)
        {
            cout<<"/";
        }
        
        
        
        cout<<endl;
    }
    

}