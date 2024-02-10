#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int n ;
    cin>>n;
    int c = a + b;
    cout<<a<<" "<<b<<" ";

    for (int i = 1; i < n; i++)
    {
        int sum = 0;
        sum = a + b;
        a = b;
        b = sum;

        cout<<sum<<" ";
        
    }
    
}