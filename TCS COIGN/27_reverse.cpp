#include<iostream>
using namespace std;

int main()
{
    string arr;
    string arr2;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k = 0;
    for (int i = n-1; i >=0; i--)
    {
        arr2[k++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i];
    }
    
    
}