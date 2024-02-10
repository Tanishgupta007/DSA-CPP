#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    int temp[n];
    int k = 0; 
    for (int i = d; i < n; i++)
    {
        temp[k] = arr1[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr1[i];
        k++;
    }
    for (int  i = 0; i < n; i++)
    {
        arr1[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    
    
}