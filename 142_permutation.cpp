// // Leetcode 46

// class Solution {

// private:
//     void solve(vector<int>&nums, int index, vector<vector<int>> &ans)
//     {
//         //base case
//         if(index>=nums.size()){
            
//             ans.push_back(nums);
//             return;
//         }

//         for(int j = index;j<nums.size();j++){
//             swap(nums[index],nums[j]);

//             solve(nums,index+1,ans);

/*backtracking -> because we are making changes in the original string ,and when we go further in the loop then it will give incorrect output
  
  
  */              

//             swap(nums[index],nums[j]);
//         }
//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;

//         int index = 0;

//         solve(nums,index,ans);
//         return ans;
//     }
// };