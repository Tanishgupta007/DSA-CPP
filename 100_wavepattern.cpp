#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(int arr[][4], int nRows, int nCols)
{
    vector<int> ans;

    for (int cols = 0; cols < nCols; cols++)
    {
        if (cols % 2 != 0)
        {
            // for odd column
            for (int rows = nRows - 1; rows >= 0; rows--)
            {
                cout<<arr[rows][cols]<<" ";
            }
            cout << endl;
        }
        else
        {

            for (int rows = 0; rows < nRows; rows++)
            {
                cout<<arr[rows][cols]<<" ";
                // ans.push_back(arr[rows][cols]);
            }
            cout << endl;
        }
    }
    return ans;
}
int main()
{
    int arr[3][4] = {
        {1, 2, 3 , 4},
        {11,22,33,44},
        {111,222,333,444}
    };

    wavePrint(arr,3,4);

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<result[i<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    

}