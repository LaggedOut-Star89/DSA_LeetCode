class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        //KADANE'S ALGO
        int sum=nums[0];
        int mxsum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=max(nums[i],sum+nums[i]);
            mxsum=max(mxsum,sum);
        }
        return mxsum;
    }
};