#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int row;
    int col;
    cout << "Enter row ";
    cin >> row;
    cout << "Enter col ";
    cin >> col;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];        
    }
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int m = INT_MIN, in = 0, sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if(m < sum){
            m = sum;
            in = i;
        }
        sum = 0;
    }
    cout<<in+1;


}