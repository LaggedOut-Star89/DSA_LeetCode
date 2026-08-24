class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int newidx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[newidx++]=nums[i];
            }
        }
        for(int i=newidx;i<nums.size();i++){
            nums[i]=0;
        }
    }
};