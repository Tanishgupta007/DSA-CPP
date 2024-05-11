class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid;

        while(s < e){
            mid = s+(e-s)/2;

            if(nums[mid] > nums[e]){
                s = mid+1;
            }else{
                e = mid;
            }
        }
        return nums[s];
    }
 //approach 2
 /*
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans = nums[0];

        return ans;
    }

*/
};