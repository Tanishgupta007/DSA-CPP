#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n1, n2, sum = 0;

    cin>>n1>>n2;

    for (int i = n1; i <= n2; i++)
    {
        int prod = 1;
        for (int j = 0; j < 3; j++)
        {
            prod *= i;  
        }
        sum += prod;
    }

    cout<<sum;
    
}