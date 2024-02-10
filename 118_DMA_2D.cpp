// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     // int *arr = new int [n];//1D array

//     int **arr = new int *[n];

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int [n];// creating 1d array coresspoding to each row i.e int *;
//     }

//     //Taking input
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>arr[i][j];
//         }

//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }
#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;

    // int *arr = new int [n];//1D array

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // creating 1d array coresspoding to each row i.e int *;
    }

    // Taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete []arr[i];
    }
    delete [] arr;

}