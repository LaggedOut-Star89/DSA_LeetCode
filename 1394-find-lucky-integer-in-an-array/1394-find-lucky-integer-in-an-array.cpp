class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int num:arr){
            mp[num]++;
        }
        int mxLucky=-1;
        for(auto x: mp){
            if(x.second==x.first){
                mxLucky=max(mxLucky,x.first);
            }
        }
        return mxLucky;
    }
};