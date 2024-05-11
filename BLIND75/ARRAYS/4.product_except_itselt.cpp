//leetcode - https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftPro = 1;
        int rightPro = 1;
        int n = nums.size();
        vector<int> res(n, 1);

        // left part
        for (int i = 0; i < n; i++) {

            res[i] *= leftPro;
            leftPro *= nums[i];
        }

        // right part
        for (int i = n - 1; i >= 0; i--) {

            res[i] *= rightPro;
            rightPro *= nums[i];
        }

        return res;
    }
};