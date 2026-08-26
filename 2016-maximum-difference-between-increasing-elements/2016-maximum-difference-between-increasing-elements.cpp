class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int left=0;
        
        int ans=-1;
        for(left=0;left<nums.size();left++){
            for(int right=left+1;right<nums.size();right++){
                if(nums[right]>nums[left]){

                ans=max(ans,nums[right]-nums[left]);
                }
            }
        }
        return ans;
    }
};