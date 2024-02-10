#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    int ans = -1;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    int ans = -1;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    int arr1[10] = {1,3,3,3,5};

    int index = firstOcc(arr1,5,3);
    int index1 = lastOcc(arr1,5,3);
    cout<<index<<" ";
    cout<<index1;
}