#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){

    int n, k;
    cin>>n >> k;

    int *arr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    vector<int> ans;
    for (int i = 0; i <= n-k; i++)
    {
        int maxi = INT_MIN;
        for (int j = i; j < i+k; j++)
        {
            maxi = max(maxi,arr[j]);
        }
        ans.push_back(maxi);
    }
    
    for(auto x : ans){
        cout<<x <<" ";
    }

    

}