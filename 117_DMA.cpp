#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int *arr = new int[n];//Dynamic memory allocation

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum is : " << getSum(arr, n);
    delete [] arr;

}