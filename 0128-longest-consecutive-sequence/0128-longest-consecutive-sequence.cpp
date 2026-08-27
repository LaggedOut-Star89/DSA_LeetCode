class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int x : nums) {
            s.insert(x);
        }
        int ans = 0;
        for (int x : s) {
            if (s.find(x - 1) == s.end()) {
                int current = x;
                int length = 1;
                while (s.find(current + 1) != s.end()) {
                    current++;
                    length++;
                }
                ans = max(ans, length);
            }
        }
        return ans;
    }
};