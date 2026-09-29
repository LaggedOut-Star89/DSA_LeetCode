// class Solution {
// public:
//     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         vector<vector<int>> res;
//         set<int> s1(nums1.begin(),nums1.end());
//         set<int> s2(nums2.begin(),nums2.end());
//         vector<int> v1;
//         for(int num:nums1){
//             if(s2.find(num)==s2.end()){
//                 v1.push_back(num);
//             }
//         }
        
//         vector<int> v2;
//         for(int num:nums2){
//             if(s1.find(num)==s1.end()){
//                 v2.push_back(num);
//             }
//         }
//         set<int> s3(v1.begin(),v1.end());
//         v1.clear();
//         for(int num:s3){
//             v1.push_back(num);
//         }
//         res.push_back(v1);
//         vector<int>().swap(v1);
//         set<int> s4(v2.begin(),v2.end());
//         v2.clear();
//         for(int num:s4){
//             v2.push_back(num);
//         }
//         res.push_back(v2);
//         vector<int>().swap(v2);
//         return res;
//     }
// };

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2); // {{},{}}
        unordered_set<int> s1 (nums1.begin(),nums1.end());
        unordered_set<int> s2 (nums2.begin(),nums2.end());
        for (int x1:s1) {
            if (!s2.count(x1)) ans[0].push_back(x1);
        }
        for (int x2:s2) {
            if (!s1.count(x2)) ans[1].push_back(x2);
        }
        return ans;
    }
};