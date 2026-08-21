class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        return binary_search(nums.begin(),nums.end(),target);
    }
};