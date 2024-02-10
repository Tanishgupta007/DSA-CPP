#include <iostream>
using namespace std;

void bubble_Sort(int arr[], int size)
{

    // base case -- already sorted
    if (size <= 1)
    {
        return;
    }
    //1st case solved -> it will move the largest element to right
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }

    bubble_Sort(arr,size-1);
    
}
int main()
{
    int arr[5] = {1, 5, 7, 4, 2};

    bubble_Sort(arr, 5);

    for (int i = 0; i < 5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}