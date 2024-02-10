#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {1, 4, 23, 5, 32, 1, 2, 4, 32, 69};
    int key;
    cout << "Enter value: ";
    cin >> key;

    if (search(arr, 10, key))
    {
        cout << key << " is present";
    }
    else
    {
        cout << key << " is not present";
    }
}