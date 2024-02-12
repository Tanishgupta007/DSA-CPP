/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

#include<vector>
#include<deque>
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    deque<long long int > q;

    vector<long long> ans;

    //first k elements in queue
    for(int i = 0;i<K;i++){
        if(A[i] < 0 ){ // for -ve number
            q.push_back(i);
        }
    }

    //store size of first k elements
    // we are using q.front() because we need only first element

    if(q.size() > 0){
        ans.push_back(A[q.front()]);
    }else{
        ans.push_back(0);
    }

    //Process for rest of the windows

    for(int i = K; i<N ;i++){

        //removal
        if(!q.empty() && i-q.front() >= K){
            q.pop_front();
        }
        //addition

        if(A[i] < 0){
            q.push_back(i);
        }

        //ans store

        if(q.size() > 0){
            ans.push_back(A[q.front()]);
        }else{
            ans.push_back(0);
        }
    }
        return ans;




}
*/