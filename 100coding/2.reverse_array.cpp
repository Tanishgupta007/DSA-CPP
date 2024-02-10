#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {2, 3, 6, 7, 9};
    int start = 0;
    int end = 4;
    while (start < end)
    {
        int temp = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i];
    }
}