class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mover=1;
        int i=0;
        while(k>0){
            if(i<arr.size() && arr[i]==mover){
                i++;
            }
            else{
                k--;
                if(k==0){
                    return mover;
                }
            }
            mover++;
        }
        return -1;
    }
};