#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void repeating(int *arr, int n){
    vector<int> ans;
    unordered_map<int,int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for(auto x:mp){
        if(x.second > 1){
            ans.push_back(x.first);
        }
    }

    for(auto x : ans){
        cout<<x<<" ";
    }
    
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr"<<i<<" ";
        cin>>arr[i];
    }

    repeating(arr,n);
    
}