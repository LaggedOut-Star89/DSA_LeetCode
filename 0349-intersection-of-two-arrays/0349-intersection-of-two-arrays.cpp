class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        set<int> s1;
        for(int num:nums1){
            s1.insert(num);
        }
        set<int> s2;
        for(int num:nums2){
            s2.insert(num);
        }
        for(int x:s1){
            if(s2.find(x)!=s2.end()){
                res.push_back(x);
            }
        }
        return res;
    }
};