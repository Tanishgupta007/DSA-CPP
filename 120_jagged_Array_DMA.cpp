#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter row: ";
    cin>>row;
    int col;
    int sizes[] = {4,2,3};

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        // cout<<"Enter size of col "<<i<<" ";
        // cin>>col;

        // sizes[i] ={col};

        arr[i] = new int [sizes[i]];
    }
    int num = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            arr[i][j] = num++;
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        
    }

    
    
}