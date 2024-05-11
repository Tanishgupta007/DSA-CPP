class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int maxSum = INT_MIN;

        for(int i=0;i<nums.size();i++){
            curr = curr+nums[i];
            if(curr > maxSum){
                maxSum = curr;
            }

            if(curr < 0){//because if curr is -ve it will not give the max sum of   subarray
                curr = 0;
            }
        }
        return maxSum;
    }
};