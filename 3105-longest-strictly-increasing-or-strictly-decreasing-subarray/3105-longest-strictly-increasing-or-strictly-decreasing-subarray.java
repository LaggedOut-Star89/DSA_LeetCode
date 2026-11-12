class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        return Math.max(fds(nums), fis(nums));
    }
    public int fds(int[] nums) {
        int left = 0;
        int mxlen = 1;
        for (int right = 1; right < nums.length; right++) {
            if (nums[right] >= nums[right - 1]) {
                left = right;
            }
            mxlen = Math.max(mxlen, right - left + 1);
        }
        return mxlen;
    }
    public int fis(int[] nums) {
        int left = 0;
        int mxlen = 1;
        for (int right = 1; right < nums.length; right++) {
            if (nums[right] <= nums[right - 1]) {
                left = right;
            }
            mxlen = Math.max(mxlen, right - left + 1);
        }
        return mxlen;
    }
}