class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {0};
        // Count available digits
        for (int d : digits) {
            freq[d]++;
        }
        int ans = 0;
        for (int num = 100; num <= 998; num += 2) {
            int x = num;
            int a = x / 100;        // hundreds digit
            int b = (x / 10) % 10;  // tens digit
            int c = x % 10;         // units digit
            int need[10] = {0};
            need[a]++;
            need[b]++;
            need[c]++;
            bool possible = true;
            for (int d = 0; d <= 9; d++) {
                if (need[d] > freq[d]) {
                    possible = false;
                    break;
                }
            }
            if (possible)
                ans++;
        }
        return ans;
    }
};