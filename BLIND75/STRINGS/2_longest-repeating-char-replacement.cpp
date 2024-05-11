class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxf = 0;
        int left = 0, right = 0;
        int ans = 0;
        unordered_map<char, int> alphabets;

        for (right = 0; right < s.size(); right++) {
            alphabets[s[right]] = 1 + alphabets[s[right]];
            maxf = max(maxf, alphabets[s[right]]); // frequency
            // for window size
            if ((right - left + 1) - maxf > k) {
                alphabets[s[left]] -= 1;
                left++;
            } else {
                ans = max(ans, (right - left + 1));
            }
        }
        return ans;
    }
};