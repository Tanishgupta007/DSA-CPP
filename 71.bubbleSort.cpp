#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)  //for round
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) //for each element
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
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr1[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    bubbleSort(arr1,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    
}