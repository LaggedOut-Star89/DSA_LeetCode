class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int n:nums){
            mp[n]++;
        }
        for(const auto&it:mp){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};