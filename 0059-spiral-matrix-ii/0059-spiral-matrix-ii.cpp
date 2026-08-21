class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int top=0;
        int left=0;
        int right=n-1;
        int bottom=n-1;
        int num=1;
        while(top<=bottom && left<=right){
            for(int col=left;col<=right;col++){
                res[top][col]=num++;
            }
            top++;
            for(int row=top;row<=bottom;row++){
                res[row][right]=num++;
            }
            right--;
            if(top<=bottom){
                for(int col=right;col>=left;col--){
                    res[bottom][col]=num++;
                }
                bottom--;
            }
            if(left<=right){
                for(int row=bottom;row>=top;row--){
                    res[row][left]=num++;
                }
                left++;
            }
        }
        return res;
    }
};