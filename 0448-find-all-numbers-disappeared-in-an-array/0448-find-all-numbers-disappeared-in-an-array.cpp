class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        map<int, int> mp;
        for(int num : nums) {
            mp[num]++;
        }
        for(int i = 1; i <= n; i++) {
            if(mp[i] == 0) {
                res.push_back(i);
            }
        }
        return res;
    }
};