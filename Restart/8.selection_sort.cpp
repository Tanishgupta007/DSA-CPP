#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
// 5,4,2,1,6
    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
        
    }
}

int main()
{
    int arr[100],size;
    cout<<"Enter the size: ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter arr "<<i<<" :";
        cin>>arr[i];
    }
    
    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}