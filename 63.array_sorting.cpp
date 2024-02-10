#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1,1,0,0,0,0,1,0};
    int left = 0;
    int right = 7;
    while (left < right)
    {
        while (arr[left] == 0 && left<right)
        {
            left++;
        }
        while (arr[right] == 1 && left<right)
        {
            right--;
        }
        if (left<right)
        {
            int temp;
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}
