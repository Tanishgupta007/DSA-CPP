#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        sum = sum+i;
        i+=1;
    }
    cout<<sum;
    
}