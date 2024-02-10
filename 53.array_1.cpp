#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int arr1[10] = {1,2,3,4,5,6,7,8,9,0};
    for (int  i = 0; i < 10; i++)
    {
        cin>>arr[i];  
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr1[4];
    
}