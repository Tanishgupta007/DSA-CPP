/*
*****
 ***
  *
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;

    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space-=1;
        }
        int j = 1;
        int num = n;
        while (j<=n-i)
        {
            cout<<"*";
            j+=1;
            // num-=1;

        }
        cout<<endl;
        i+=1;
        

    }
    
}