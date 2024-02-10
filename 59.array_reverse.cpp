#include <iostream>
using namespace std;

int reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    for (int i = 0; i < n; i++)
    {
        while (start <= end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[6] = {1, 2, 3, 4, 5, 6};

    reverse(arr, 5);
    reverse(arr1, 6);

    printArray(arr,5);
    printArray(arr1,6);
}