class Solution {
    public int scoreOfParentheses(String s) {
        Stack<Integer> st = new Stack<>();
        st.push(0);
        for (char c : s.toCharArray()) {
            if (c == '(') {
                st.push(0);
            } 
            else {
                int inside = st.pop();
                int score;
                if (inside == 0) {
                    score = 1;
                } else {
                    score = 2 * inside;
                }
                st.push(st.pop() + score);
            }
        }
        return st.pop();
    }
}