// class Solution {
// public:
//     int distributeCandies(vector<int>& candyType) {
//         map<int,int> mp;
//         for(int num:candyType){
//             mp[num]++;
//         }
//         int freqsum=0;
//         for(auto x:mp){
//             freqsum+=x.second;
//         }
//         if(mp.size()<freqsum/2){
//             return mp.size();
//         }
//         return freqsum/2;

//     }
// };
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st(candyType.begin(), candyType.end());
        return min((int)st.size(), (int)candyType.size() / 2);
    }
};