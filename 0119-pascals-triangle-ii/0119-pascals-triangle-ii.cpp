class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;
        for(int i=0;i<=rowIndex;i++){
            vector<int> v;
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    v.push_back(1);
                }
                else{
                    v.push_back(res[i-1][j-1]+res[i-1][j]);
                }
            }
            res.push_back(v);
        }
        return res[res.size()-1];
    }
};