class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int gmax=0;
        for(char c:s){
            if(c=='('){
                cnt++;
            }
            else if(c==')'){
                cnt--;
            }
            gmax=max(gmax,cnt);
        }
        return gmax;
    }

};