class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMin = 1;
        int currMax = 1;

        int maxPro = INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                swap(currMax,currMin);
            }
            currMax = max(nums[i], nums[i] * currMax);
            currMin = min(nums[i], nums[i] * currMin);

            maxPro = max(currMax, maxPro);
        }

        return maxPro;
    }
};