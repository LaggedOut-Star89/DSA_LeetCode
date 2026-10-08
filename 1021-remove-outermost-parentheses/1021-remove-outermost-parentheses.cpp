class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string ans="";
        for(char c:s){
            if(c=='('){
                depth++;
                if(depth>1){
                    ans+=c;
                }
            }
            else{
                depth--;
                if(depth>0){
                    ans+=c;
                }
            }
        }
        return ans;
    }
};