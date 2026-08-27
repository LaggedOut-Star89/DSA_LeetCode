class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        int res;
        for(auto &it:mp){
            if(it.second==1){
                res=it.first;
            }
        }
        return res;

    }
};