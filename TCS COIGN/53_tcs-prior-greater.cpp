#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr "<<i<<" ";
        cin>>arr[i];
    }

    int m = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(m < arr[i]){
            m = arr[i];
            count++;
        }
    }
    
    cout<<count;
    
}