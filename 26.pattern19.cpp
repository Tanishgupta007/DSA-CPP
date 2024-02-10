/*
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
    int i = 1;
    int n = 6;
    
    while (i<=n)
    {
        int j = 1;
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space-=1;
        }
        while (j<=n-i+1)
        {
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}