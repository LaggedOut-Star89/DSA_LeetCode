class Solution {
public:
    bool isPalindromic(string str) {
        string s="";
        string res="";
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            int ascii=ch;
            s+=bitset<8>(ascii).to_string();
            res+=bitset<8>(ascii).to_string();
        }
        reverse(res.begin(),res.end());
        return res==s;
    }
};