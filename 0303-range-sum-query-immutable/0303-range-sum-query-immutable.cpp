class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        v.resize(n+1,0);
        for(int i=0;i<n;i++){
            v[i+1]=v[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return v[right+1]-v[left];
    }
};

// class NumArray {
// public:
//     vector<int> nums;
//     NumArray(vector<int>& nums) {
//         this->nums=nums;
//     }
    
//     int sumRange(int left, int right) {
//         int sum=0;
//         for(int i=left;i<right+1;i++){
//             sum+=nums[i];
//         }
//         return sum;
//     }
// };


/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */