class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        int mx=-1;
        vector<pair<int,int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        int j=1;
        for(auto p:v){
            res.push_back(p.first);
            j++;
            if(j>k){
                break;
            }
        }
        return res;
    }
};