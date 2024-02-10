// Celebrity Problem - Geeks for Geeks

 /*
 
 //{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    bool knows(vector<vector<int> >& M,int a,int b,int n){
        
        if(M[a][b] == 1){
            return true;
        }else{
            return false;
        }
        
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        //step 1 : push all elements to the stack
        for(int i = 0;i<n;i++){
            s.push(i);
        }
        
        //step2: get two top elements and compare them 
        
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
    
            if(knows(M,a,b,n)){
                s.push(b);
            }else{
                s.push(a);
            }
    
        }
        
        int candidate = s.top(); //potential candidate that is left in the stack
        
        //Step3: verify row and column of the potential candidate
    
        bool rowCheck = false;
        int zeroCount = 0;
        
        for(int i = 0;i<n;i++){
            if(M[candidate][i] == 0){
                zeroCount++;
            }
        }
        
        //check all zero
        if(zeroCount == n){
            rowCheck = true;
        }
        
        //Column check
        
        bool columnCheck = false;
        int oneCount = 0;
        
        for(int i = 0;i<n;i++){
            if(M[i][candidate] == 1){
                oneCount++;
            }
        }
        
        //we are checking for one less than total columns that is n
        
        if(oneCount == n-1){
            columnCheck = true;
        }
        
        
        if(rowCheck == true && columnCheck == true){
            return candidate;
        }else{
            return -1;
        }
        
        
    }
        
        
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends*/