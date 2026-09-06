class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        int cnt1=0;
        int cnt2;
        int cnt3;
        for(string s:words){
            cnt1=s.length();
            cnt2=s.length();
            cnt3=s.length();
            for(char ch:s){
                if(string("qwertyuiop").find(ch) != string::npos  || string("QWERTYUIOP").find(ch) != string::npos){
                    cnt1--;
                }
                else if(string("asdfghjkl").find(ch)!=string::npos || string("ASDFGHJKL").find(ch) != string::npos){
                    cnt2--;
                }
                else if(string("zxcvbnm").find(ch) != string::npos || string("ZXCVBNM").find(ch) != string::npos){
                    cnt3--;
                }
            }
            if(cnt1==0 || cnt2==0 ||cnt3==0){
                res.push_back(s);
            }
        }
        return res;
    }
};