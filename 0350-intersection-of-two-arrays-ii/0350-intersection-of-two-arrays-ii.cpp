class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        for(int n:nums1){
            mp[n]++;
        }
        vector<int> res;
        for(auto x:nums2){
            if(mp[x]>0){
                res.push_back(x);
                mp[x]--;
            }
        }
        return res;
    }
};