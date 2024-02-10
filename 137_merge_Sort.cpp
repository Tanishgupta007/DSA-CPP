#include <iostream>
using namespace std;

void merge(int arr[], int start, int end)
{

    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying elements to new arrays
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;
    while (index1 < len1 && index2 < len2)
    {

        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {

        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int arr[], int start, int end)
{

    // base case

    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // left part
    mergeSort(arr, start, mid);
    // Right part
    mergeSort(arr, mid + 1, end);

    // merge sorted arrays
    merge(arr, start, end);
}
int main()
{
    int arr[15];

    int size;
    cout<<"Enter size: ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter arr "<<i<<" ";
        cin>>arr[i];
    }
    
    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// #include <iostream>
// using namespace std;

// void merge(int arr[], int start, int end)
// {

//     int mid = start + (end - start) / 2;

//     int len1 = mid - start + 1;
//     int len2 = end - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     // copying array data to first and second array
//     int mainArrayIndex = start;

//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = mid + 1;

//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[mainArrayIndex++];
//     }

//     // merging 2 sorted array;

//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = start;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }

//     while (index1 < len1)
//     {
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[mainArrayIndex++] = second[index2++];
//     }
// }

// void mergeSort(int arr[], int start, int end)
// {

//     if (start >= end)
//     {
//         return;//start = end -> only 1 element
//     }
//     int mid = start + (end - start) / 2;

//     // Left part sort;
//     mergeSort(arr, start, mid);

//     // Right part sort;

//     mergeSort(arr, mid + 1, end);

//     merge(arr, start, end);
// }
// int main()
// {
//     int arr[15];
//     int size = 15;

//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }

//     int start = 0;
//     int end = size - 1;

//     mergeSort(arr, start, end);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }