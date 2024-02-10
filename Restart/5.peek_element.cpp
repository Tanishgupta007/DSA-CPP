#include <iostream>
using namespace std;

int peek(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = (start + end) / 2;
    }
    return start;
}
int main()
{
    int arr[5] = {1, 2, 5, 3, 2};
    int index = peek(arr, 5);
    cout<<"peek element is at index: " << index;
}

