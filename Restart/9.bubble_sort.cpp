#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++) // for each round
    {
        bool swapped = false;
        for (int j = 0; j < size-1; j++) // for each element
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
int main()
{
    int arr[10];

    int size;
    cout<<"Enter the size : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"arr"<<i<<" :";
        cin>>arr[i];
    }
    
    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}