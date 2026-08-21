class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map<int,int> freq;
        // for(int num:nums){
        //     freq[num]++;
        // }
        // int i=0;
        // for(auto const&[num,count]:freq){
        //     int finalCount=min(count,2);
        //     for(int j=0;j<finalCount;j++){
        //         nums[i++]=num;
        //     }
        // }
        // return i;
        if (nums.size() <= 2) return nums.size();
        
        int i = 2; // Pointer to place the next valid element
        
        for (int j = 2; j < nums.size(); j++) {
            // Compare current element with element 2 positions back
            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }
        
        return i; // Length of updated array
    }
};