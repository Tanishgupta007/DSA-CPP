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
    int n = 5;
    while (i<=n)
    {
        int j =1;
        while (j<=n-i)
        {
            cout<<"*";
            j+=1;
        }

        cout<<endl;
        i+=1;
    }
    
}