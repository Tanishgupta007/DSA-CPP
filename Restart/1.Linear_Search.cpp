#include <iostream>
using namespace std;
int linear(int arr[], int key, int size)
{

    for (int index = 0; index < size; index++)
    {
        if (arr[index] == key)
        {
            return index;
        }
    }

    return -1;
}
int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array you want to create :";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr" << i << " :";
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key: ";
    cin >> key;
    int result = linear(arr, key, size);
    if (result == -1)
    {
        cout << key << " is not present";
    }
    else
    {
        cout << key << " is present at index " << result;
    }
}
