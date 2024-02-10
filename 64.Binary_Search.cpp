#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;   // start + (end-start)/2  -> for big values
    }
    return -1;
}
int main()
{
 
    int arr1[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr["<<i<<"] : ";
        cin>>arr1[i];
        
    }
    
    int key;
    cout<<"Enter the element you want to find: ";
    cin>>key;

    int index = binarySearch(arr1,6,key);
    cout<<key<<" is present at index "<<index<<endl;
}