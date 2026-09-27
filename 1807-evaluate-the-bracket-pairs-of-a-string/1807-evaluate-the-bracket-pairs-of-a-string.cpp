// class Solution {
// public:
//     string evaluate(string s, vector<vector<string>>& knowledge) {
//         string temp="";
//         vector<string> v;
//         for(char c:s){
//             if(c=='('||c==')'){
//                 if(!temp.empty()){
//                     for(auto x:knowledge){
//                         if(temp==x[0]){
//                         v.push_back(x[1]);
                            
//                         }
//                     }
//                     temp.clear();
//                 }
//             }
//             else{
//                 temp+=c;
//             }
//         }
//         if(!temp.empty()){
//             v.push_back(temp);
//         }
//         string res="";
//         for(string str:v){
//             res+=str;
//         }
//         return res;

//     }
// };
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> lookup;
        for (auto& pair : knowledge) {
            lookup[pair[0]] = pair[1];
        }
        
        string result;
        int n = s.size();
        int i = 0;
        
        while (i < n) {
            if (s[i] == '(') {
                int j = s.find(')', i);
                string key = s.substr(i + 1, j - i - 1);
                if (lookup.count(key)) {
                    result += lookup[key];
                } else {
                    result += '?';
                }
                i = j + 1;
            } else {
                result += s[i];
                i++;
            }
        }
        
        return result;
    }
};