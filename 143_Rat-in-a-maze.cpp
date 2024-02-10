// GFG - Rat in a maze problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSafe(vector<vector<int>> &m, int n, vector<vector<int>> visited, int newx, int newy)
{
    /*
        Here we also have three conditions
    1. X and Y should be greater than equal to 0 and less than n
    2. visited[newx][newy] = 0;
    3. m[newx][newy] = 1
    */

    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && visited[newx][newy] == 0 && m[newx][newy] == 1)
    {
        return true;
    }
    else{
        return false;
    }
}
void solve(vector<vector<int>> &m, int n, int x, int y, string path, vector<vector<int>> visited, vector<string> ans)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1; // for current position

    /*
    After this we have 4 choices
    1. Move down (x+1,y)
    2. Move right (x,y+1)
    3. Move up   (x-1,y)
    4. Move left (x,y-1)
    */

    // for down

    int newx = x + 1;
    int newy = y;

    if (isSafe(m, n, visited, newx, newy))
    {
        path.push_back('D');
        solve(m, n, newx, newy, path, visited, ans);
        path.pop_back();
    }
    // for left

     newx = x;
     newy = y-1;

    if (isSafe(m, n, visited, newx, newy))
    {
        path.push_back('L');
        solve(m, n, newx, newy, path, visited, ans);
        path.pop_back();
    }
    // for up

     newx = x - 1;
     newy = y;

    if (isSafe(m, n, visited, newx, newy))
    {
        path.push_back('U');
        solve(m, n, newx, newy, path, visited, ans);
        path.pop_back();
    }
    // for Right

     newx = x;
     newy = y+1;

    if (isSafe(m, n, visited, newx, newy))
    {
        path.push_back('R');
        solve(m, n, newx, newy, path, visited, ans);
        path.pop_back();
    }

    //Here we are use backtracking and delete the old path otherwise the old path will be included in the output
    visited[x][y] = 0;


}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    string path = "";
    if (m[0][0] == 0)
    {
        return ans; // starting position is 0 then return empty string
    }
    // creating a 2d array visited

    vector<vector<int>> visited = m; // Copying all elements of m to visited array

    // Initializing all the elements of the visited array to 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    int srcx = 0; // index x=0
    int srcy = 0; // index y=0

    solve(m, n, srcx, srcy, path, visited, ans);

    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> m(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>m[i][j];
        }
    }

    findPath(m,n);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<m[i][j]<<" ";
    //     }
    // }
    
    

}












/*
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    bool isSafe(vector<vector<int>> &m, int n,vector<vector<int>>visited,int newx,int newy){
        //3 conditions
        // Less than n
        // next should be open path
        // next should not be visited
        
        if((newx < n && newx >= 0) && (newy < n && newy >= 0) && m[newx][newy] == 1 && visited[newx][newy] == 0 ){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n,vector<string> &ans,
    int x,int y,string path,vector<vector<int>> visited ){
        
        //base case
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;//currrent position to visited
        
        //there are 4 choices - D, L, R, U
        
        //For down -> x will be increased and y will be same
        int newx = x+1;
        int newy = y;
        
        if(isSafe(m,n,visited,newx,newy)){
            path.push_back('D');
            solve(m,n,ans,newx,newy,path,visited);
            
            path.pop_back();
            //For backtracking->when we find the new path, then the old path will also be included 
            
        }
        
        //for left
        newx = x;
        newy = y-1;
        
        if(isSafe(m,n,visited,newx,newy)){
            path.push_back('L');
            solve(m,n,ans,newx,newy,path,visited);
            
            path.pop_back();
            //For backtracking->when we find the new path, then the old path will also be included 
            
        }
        //for Right
        newx = x;
        newy = y+1;
        
        if(isSafe(m,n,visited,newx,newy)){
            path.push_back('R');
            solve(m,n,ans,newx,newy,path,visited);
            
            path.pop_back();
            //For backtracking->when we find the new path, then the old path will also be included 
            
        }
        
        //for Up
        newx = x-1;
        newy = y;
        
        if(isSafe(m,n,visited,newx,newy)){
            path.push_back('U');
            solve(m,n,ans,newx,newy,path,visited);
            
            path.pop_back();
            //For backtracking->when we find the new path, then the old path will also be included 
            
        }
        
        visited[x][y] = 0;
    }
    
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
       vector<string> ans;
       
       if(m[0][0] == 0){
           return ans; //because the starting source is closed;
       }
       
       int srcx = 0;
       int srcy = 0;
       
       //creating 2d array visited
       vector<vector<int>> visited = m;
       
       //Initializing all elements with 0
       for(int i = 0;i<n;i++)
       {
           for(int j = 0;j<n;j++)
           {
               visited[i][j] = 0;
           }
       }
       
       string path = "";
       
       solve(m,n,ans,srcx,srcy,path,visited);
       sort(ans.begin(),ans.end());
       return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends*/