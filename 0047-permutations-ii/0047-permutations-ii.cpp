class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        do{
            s.insert(nums);
        }
        while(next_permutation(nums.begin(),nums.end()));
        for(auto &vec:s){
            v.push_back(vec);
        }
        return v;

    }
};