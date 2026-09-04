class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int idx=-1;
        int mn;
        int mx;
        for(int i=0;i<nums.size();i++){
            mn=*min_element(nums.begin()+i,nums.end());
            mx=*max_element(nums.begin(),nums.begin()+i);
            int instability=mx-mn;
            if(instability<=k){
                idx=i;
                return idx;
            }
        }
        return idx;
    }
};