/*
ABC
BCD
CDE*/

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 4;

    char val = 'A';
    while (i<=n)
    {
        int j = 1;
        char val1;
        while (j<=n)
        {
            val1 =val+i+j-2; 
            cout<<val1<<" ";
            j+=1;

        }
        // val1+=1;
        cout<<endl;
        i+=1;

    }
    
}