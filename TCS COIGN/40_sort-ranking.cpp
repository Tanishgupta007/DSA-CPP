#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compareArr(pair<int, int> &a, pair<int, int> &b)
{
    return a.second > b.second;
}
void sortRank(int arr[], int n)
{
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    vector<pair<int, int>> vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(), compareArr);

    for(auto x : vec){
        cout<<x.first<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr"<<i<<" :";
        cin>>arr[i];
    }
    
    sortRank(arr, n);
}