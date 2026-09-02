class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool ans;
        vector<int> res;
        int cntEven=0;
        int cntOdd=0;
        for(int n:nums1){
            if(n%2==0){
                cntEven++;
            }
            else{
                cntOdd++;
            }
        }
        if(cntEven==nums1.size() || cntOdd==nums1.size()){
            return true;
        } 
        //remaining cases->
        if(cntOdd>=1){
            return true;
        }
        return false;
    }
};