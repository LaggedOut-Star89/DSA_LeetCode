// class NumArray {
// public:
//     vector<int> nums;
//     NumArray(vector<int>& nums) {
//         this->nums=nums;
//     }
    
//     void update(int index, int val) {
//         nums[index]=val;
//     }
    
//     int sumRange(int left, int right) {
//         int sum=0;
//         for(int i=left;i<=right;i++){
//             sum+=nums[i];
//         }
//         return sum;
//     }
// };
class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefix.resize(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
    }
    
    void update(int index, int val) {
        int old=prefix[index+1]-prefix[index];
        int diff=val-old;
        for(int i=index+1;i<prefix.size();i++){
            prefix[i]+=diff;
        }
    }
    
    int sumRange(int left, int right) {
        return prefix[right+1]-prefix[left];
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */