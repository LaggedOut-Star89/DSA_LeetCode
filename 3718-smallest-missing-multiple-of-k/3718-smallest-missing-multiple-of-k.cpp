class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int num=k;
        // while(true){
        //     bool exist=false;
        //     for(int x:nums){
        //         if(x==num){
        //             exist=true;
        //         }
        //     }
        //     if(!exist){
        //         return num;
        //     }
        //     num+=k;
        // }
        // return -1;
        unordered_set<int> s(nums.begin(),nums.end());
        while(s.contains(num)){
            num+=k;
        }
        return num;
    }
};