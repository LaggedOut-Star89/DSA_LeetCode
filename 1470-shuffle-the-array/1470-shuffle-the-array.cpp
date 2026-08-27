class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            v1.push_back(nums[i]);
        }
        for(int i=n;i<nums.size();i++){
            v2.push_back(nums[i]);
        }
        vector<int> res;
        int i=0;
        int j=0;
        while(i<n && j<n){
            res.push_back(v1[i++]);
            res.push_back(v2[j++]);
        }
        return res;
    }
};