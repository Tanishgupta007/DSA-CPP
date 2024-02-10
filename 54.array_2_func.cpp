#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Printing Done" << endl;
}
int main()
{
    int arr1[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    printArray(arr1, 10);
    printArray(arr2, 10);
}