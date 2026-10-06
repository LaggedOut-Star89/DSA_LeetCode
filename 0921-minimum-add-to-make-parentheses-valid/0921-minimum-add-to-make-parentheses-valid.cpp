class Solution {
public:
    int minAddToMakeValid(string s) {
        int res=0;
        int c=0;
        for(char ch:s){
            if(ch=='('){
                c++;
            }
            else if(c>0){
                c--;
            }
            else {
                res++;
            }
        }
        return res+c;

    }
};