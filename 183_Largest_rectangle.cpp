Max rectangle

Given a binary matrix M of size n X m. Find the maximum area of a rectangle formed only of 1s in the given matrix.

Example 1:

Input:
n = 4, m = 4
M[][] = {{0 1 1 0},
         {1 1 1 1},
         {1 1 1 1},
         {1 1 0 0}}
Output: 8

Explanation: For the above test case the
matrix will look like
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
the max size rectangle is 
1 1 1 1
1 1 1 1
and area is 4 *2 = 8.
/*'
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    
    vector<int> nextSmallerElements(int *heights, int n){
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for(int i = n-1; i>=0 ; i--){
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();

            s.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerElements(int *heights, int n){
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for(int i = 0; i<n ; i++){
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();

            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(int *heights,int n) {

        vector<int> next(n);
        next = nextSmallerElements(heights,n);

        vector<int> prev(n);
        prev = prevSmallerElements(heights,n);

        int area = INT_MIN;

        for(int i = 0; i < n; i++){
            int length = heights[i];

            if(next[i] == -1){
                next[i] = n;// because there is no element smaller than current element so we will go directly to the last element
            }

            int breadth = next[i] - prev[i] - 1;

            int newArea = length * breadth;

            area = max(area,newArea);
        }
        return area;

    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        //compute area for first row
        
        int area = largestRectangleArea(M[0],m);
        
        
        for(int i = 1;i<n;i++){
            for(int j = 0;j<m;j++){
                
                //Adding previous row values
                if(M[i][j] != 0){
                    M[i][j] = M[i][j] + M[i-1][j];
                }else{
                    M[i][j] = 0;
                }   
            }
            //entire row ia updated now
            int newArea = largestRectangleArea(M[i], m);
            area = max(area,newArea);
        }
        
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends

*/