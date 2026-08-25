class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0;
        int ans=0;
        // for(int right=0;right<nums.size();right++){
        //     while(nums[left]==1){
        //         left++;
        //     }
        //     ans=max(ans,left-right+1);
        //     right=left;
        // }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;

            }
            else{
                count=0;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};