//gfg

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        
        if(N == 0){
            return "-1";
        }
        if(N == 1){
            return arr[0];
        }
        //step1: sort
        sort(arr, arr+N);
        string ans = "";
        string first = arr[0];
        string last = arr[N-1];
        
        int mini = min(arr[0].size(), arr[N-1].size());
        int i = 0;
        while(i<mini && first[i] == last[i]){
            ans = ans+first[i];
            i++;
        }
        if(ans.empty()){
            return "-1";
        }      
        return ans;
    }
};