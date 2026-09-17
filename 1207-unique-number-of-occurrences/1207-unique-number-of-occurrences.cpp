class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int num:arr){
            mp[num]++;
        }
        map<int,int> mp2;
        for(auto x:mp){
            mp2[x.second]++;
        }
        for(auto x:mp2){
            if(x.second>1){
                return false;
            }
        }
        return true;
    }
};