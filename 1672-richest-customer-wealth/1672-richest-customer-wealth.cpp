class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        int mxwealth=0;
        for(vector<int> v:accounts){
            wealth=0;
            for(int i=0;i<v.size();i++){
                wealth+=v[i];
            }
            mxwealth=max(mxwealth,wealth);
        }
        return mxwealth;
    }
};