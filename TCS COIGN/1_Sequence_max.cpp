#include <iostream>
#include<vector>

using namespace std;

int check_max(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
}
vector<int> seq_change(int arr[], int n)
{
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int ans = arr[i] + check_max(arr, i);
        res.push_back(ans);
    }

    return res;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter N:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr " << i << " : ";
        cin >> arr[i];
    }

    vector<int> res = seq_change(arr,n);

    for(auto x:res){
        cout<<x<<" ";
    }
}