class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> stk;
        stk.push("");
        
        for (char c : s) {
            if (c == '(') {
                stk.push("");
            } else if (c == ')') {
                string top = stk.top();
                stk.pop();
                reverse(top.begin(), top.end());
                stk.top() += top;
            } else {
                stk.top() += c;
            }
        }
        
        return stk.top();
    }
};