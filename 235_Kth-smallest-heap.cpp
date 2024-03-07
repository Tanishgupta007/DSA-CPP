//Approach 1: geeks for Geeks

Kth smallest element : https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<algorithm> 
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        sort(arr, arr+r+1);
        int ans = 0;
        for(int i = 0 ; i <= k-1; i++){
            ans = i;
        }
        
        return arr[ans];
        
    }
};