// Swap alternate

#include <iostream>
using namespace std;

int alter(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // op -> {2,1,4,3,5}
    int arr1[6] = {1, 2, 3, 4, 5, 6}; // op -> {2,1,4,3,5}

    alter(arr, 5);
    alter(arr1, 6);
    printArray(arr1,6);
}