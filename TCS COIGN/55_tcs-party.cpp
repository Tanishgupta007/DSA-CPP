#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;

    int *arr1 = new int[n];
    int *arr2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter index "<<i<<" of arr1: ";
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter index "<<i<<" of arr2: ";
        cin>>arr2[i];
    }
    int m = INT_MIN;
    int in = 0;
    int out = 0;
    for (int i = 0; i < n; i++)
    {
        in += arr1[i];
        out +=arr2[i];
        int rem = in - out;
        if(m < abs(rem)){
            m = rem;
        }
    }

    cout<<m;
    
    
}