/*
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 5;
    int c = 1;
    while (i<=n)
    {
        int j = 1;

        while (j<=i)
        {
            cout<<c;
            j+=1;
        }
        cout<<endl;
        c+=1;
        i+=1;
    }
    
}