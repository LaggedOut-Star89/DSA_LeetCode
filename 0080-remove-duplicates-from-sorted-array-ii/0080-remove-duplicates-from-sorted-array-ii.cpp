class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        int i=0;
        for(auto const&[num,count]:freq){
            int finalCount=min(count,2);
            for(int j=0;j<finalCount;j++){
                nums[i++]=num;
            }
        }
        return i;
    }
};