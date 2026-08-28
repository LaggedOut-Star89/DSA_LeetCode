class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int n:nums){
            m[n]++;
        }
        for(auto &it:m){
            if(it.second> (nums.size())/2){
                return it.first;
            }
        }
        return -1;
    }
};