/*
1
23
345
4567
*/

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 5;
    while (i<=n)
    {
        int c = i;
        int j = 1;
        while (j<=i)
        {
            cout<<c<<" ";
            c+=1;
            j+=1;
        }
        cout<<endl;
        
        i+=1;

    }
    
}