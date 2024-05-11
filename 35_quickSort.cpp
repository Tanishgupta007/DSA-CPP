#include <iostream>
using namespace std;

int partition(int *arr, int start, int end)
{

    int pivot = arr[start];

    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pIndex = start + count;

    swap(arr[pIndex], arr[start]);

    int i = start;
    int j = end;

    while (i < pIndex && j > pIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j++;
        }
        if (i < pIndex && j > pIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pIndex;
}
void quickSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int part = partition(arr, start, end);

    quickSort(arr, start, part - 1);
    quickSort(arr, part + 1, end);
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr" << i << " ";
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}