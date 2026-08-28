class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int gap=0;
        int mxgap=0;
        for(int i=1;i<n;i++){
            gap=nums[i]-nums[i-1];
            mxgap=max(mxgap,gap);
        }
        return mxgap;
    }
};