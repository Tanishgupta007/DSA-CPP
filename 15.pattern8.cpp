/*
1
23
456
78910
*/

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 5;

    int c= 1;
    while (i<=n)
    {
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