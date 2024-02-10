#include <iostream>
#include <climits>
using namespace std;

int maxrowSum(int arr[][3], int row, int col)
{
    int max1 = INT_MIN;
    int rowIndex = -1;


    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if(sum>max1)
        {
            max1 = sum;
            rowIndex = i;
        }

    }
    cout<<"Max is "<<max1;
    return rowIndex;
}

int main()
{

    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<" at index "<<maxrowSum(arr, 3, 3);

}