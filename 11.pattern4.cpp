#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    int i = 1;

    while (i<=n)
    {
        int j = 0;
        while (j<n)
        {
            cout<<n-j;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}