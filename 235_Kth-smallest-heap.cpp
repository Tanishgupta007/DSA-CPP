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

//approach 2 : heap 

 //Approach 2: heap
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;
        
        //step1: 
        for(int i = 0; i<k ;i++){
            pq.push(arr[i]);
        }
        //step2: for remaining elements
        
        for(int i = k; i <= r; i++){
            if(arr[i] < pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }   
        
        
        //step3: ans is at top
        
        int ans = pq.top();
    
        return ans;
    }   
};

