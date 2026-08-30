class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minel = *min_element(nums.begin(), nums.end());
        int maxel = *max_element(nums.begin(), nums.end());
        int minPos = 0, maxPos = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == minel)
                minPos = i;
            if (nums[i] == maxel)
                maxPos = i;
        }
        if (minPos > maxPos)
            swap(minPos, maxPos);
        int option1 = maxPos + 1;
        int option2 = n - minPos;
        int option3 = (minPos + 1) + (n - maxPos);
        return min({option1, option2, option3});
    }
};