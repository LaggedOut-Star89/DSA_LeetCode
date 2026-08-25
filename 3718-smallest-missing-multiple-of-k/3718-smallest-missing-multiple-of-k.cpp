class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int num=k;
        while(true){
            bool exist=false;
            for(int x:nums){
                if(x==num){
                    exist=true;
                }
            }
            if(!exist){
                return num;
            }
            num+=k;
        }
        return -1;
    }
};