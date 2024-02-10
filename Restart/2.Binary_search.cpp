#include <iostream>
using namespace std;

void inArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int bs(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of arr: ";
    cin >> size;
    inArr(arr, size);

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int index = bs(arr, size, key);
    cout<<key <<" is present at index "<<index;
}