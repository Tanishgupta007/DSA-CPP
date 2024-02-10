#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans1 = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans1 = mid;
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
        mid = start + (end - start) / 2;
    }
    return ans1;
}
int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans2 = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans2 = mid;
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
        mid = start + (end - start) / 2;
    }
    return ans2;
}
int totalOcc(int first, int last)
{
    int total = (last - first) + 1;

    return total;
}
int main()
{
    int arr1[100];
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr1[i];
    }

    int key;
    cout << "Enter the key you want to find: ";
    cin >> key;
    int first = firstOcc(arr1, n, key);
    int second = lastOcc(arr1, n, key);
    int answer = totalOcc(first, second);
    cout << key << " is present " << answer << " times";
}