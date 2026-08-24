class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mover=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=mover){
                i++;
            }
            else{
                mover++;
            }
        }
        return mover;
    }
};