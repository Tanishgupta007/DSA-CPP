#include <iostream>
#include <algorithm>
using namespace std;

bool check(int *arr1, int *arr2, int n1, int n2)
{

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    for (int i = 0; i < n1; i++)
    {
        bool present = false;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                present = true;
                break;
            }
        }
        if (present == false)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[9] = {6, 10, 9, 8, 1, 2, 3, 4, 5};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    bool ans = check(arr1, arr2, n1, n2);
    cout << ans;
}