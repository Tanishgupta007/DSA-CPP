class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        // step1: sort
        sort(nums.begin(), nums.end());

        set<vector<int>> s;
        vector<vector<int>> res;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            int k = n - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (sum < 0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        for (auto i : s)
        {
            res.push_back(i);
        }

        return res;
    }
};