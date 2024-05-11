#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    int m;
    cout << "Enter no of products: " << endl;
    cin >> m;

    cout << "Enter no of days: " << endl;
    cin >> n;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter "<<j+1<<" product of "<<i+1<<" day...";
            cin>>arr[i][j];
        }
    }

    int maxi = INT_MIN;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            maxi = max(maxi, arr[i][j]);
        }
        vec.push_back(maxi);
        maxi = INT_MIN;
    }

    for(auto x:vec){
        cout<<x<<" ";
    }

}