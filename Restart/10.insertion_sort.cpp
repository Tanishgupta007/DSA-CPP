#include <iostream>
using namespace std;

void insertion_Sort(int arr[], int size)
{
    // Assuming that index[0] is sorted;
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[10];
    int size;
    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    insertion_Sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}