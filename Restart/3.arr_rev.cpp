#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    for (int i = 0; i < size; i++)
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

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);
    printArray(arr,size);
}