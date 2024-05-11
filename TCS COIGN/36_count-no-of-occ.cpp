#include <iostream>
// #include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void countOcc(int *arr, int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }


    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr"<<i<<" ";
        cin>>arr[i];
    }
    countOcc(arr,n);
}