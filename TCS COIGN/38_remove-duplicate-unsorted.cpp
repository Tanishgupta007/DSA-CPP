#include <iostream>
#include <unordered_map>
using namespace std;

int* removeDup(int arr[], int &n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int newSize = 0;
    for(auto x : mp){
        newSize++;
    }
    int *newArr = new int[newSize];

    int a = 0;
    for(auto x : mp){
        newArr[a++] = x.first; 
    }

    n = newSize;
    return newArr;
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    int *newArr = removeDup(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<newArr[i]<<" ";
    }
    

    delete[] arr;
    delete[] newArr;
}