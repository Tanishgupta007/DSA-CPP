#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int totalrow = matrix.size();
    int totalcol = matrix[0].size();

    int start = 0;
    int end = totalrow * totalcol - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        /*
        matrix[row][col];
        row = midIndex / totalcol => 6/4 = 1;
        col = midIndex % totalcol => 6%4 = 2;
        matrix[1][2];
        */
        int element = matrix[mid / totalcol][mid % totalcol];

        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {9, 11, 13, 17},
        {19, 21, 24, 25}};
        int target;
        cin>>target;
        if(searchMatrix(matrix,target)){
            cout<<"Number is present";
        }else{
            cout<<"Number is not present";
        }
}