#include <iostream>
using namespace std;

int binarySearch(int *arr, int start, int end, int target)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
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
    int n;
    cout<<"Enter N: ";
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr "<<i<<" : ";
        cin>>arr[i];
    }
    
    int start = 0;
    int end = n - 1;
    int target;
    cout<<"Enter target: ";
    cin >> target;

    int index = binarySearch(arr, 0, end, target);

    cout <<"Index is : "<< index;
}