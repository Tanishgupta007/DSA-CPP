class Solution {
public:
    bool isAnagram(string s, string t) {
        /*    // Approach 1
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());

            return s==t;
        */


        // Approach 2 - using hash table
        /*
        unordered_map<char, int> count;

        for(auto x : s){
            count[x]++;
        }

        for(auto x : t){
            count[x]--;
        }

        for(auto x : count){
            if(x.second != 0){
                return false;
            }
        }
        return true;
        */


        // Approach 3 - using hashtable(using arrays)

        int count[26] = {0};

        for (auto x : s) {
            count[x - 'a']++;
        }

        for (auto x : t) {
            count[x - 'a']--;
        }

        for (auto x : count) {
            if (x != 0) {
                return false;
            }
        }
        return true;
    }
};