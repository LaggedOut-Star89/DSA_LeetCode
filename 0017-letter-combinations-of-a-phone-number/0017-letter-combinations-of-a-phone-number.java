class Solution {
    public List<String> letterCombinations(String digits) {
        HashMap<Integer, String> map = new HashMap<>();
        map.put(2, "abc");
        map.put(3, "def");
        map.put(4, "ghi");
        map.put(5, "jkl");
        map.put(6, "mno");
        map.put(7, "pqrs");
        map.put(8, "tuv");
        map.put(9, "wxyz");

        List<String> ans = new ArrayList<>();
        if (digits.length() == 0)
            return ans;
        backtrack(0, digits, new StringBuilder(), ans, map);
        return ans;
    }
    private void backtrack(int index, String digits,StringBuilder curr,List<String> ans,HashMap<Integer, String> map) {

        if (index == digits.length()) {
            ans.add(curr.toString());
            return;
        }

        int digit = digits.charAt(index) - '0';
        String letters = map.get(digit);
        for (int i = 0; i < letters.length(); i++) {
            curr.append(letters.charAt(i));
            backtrack(index + 1, digits, curr, ans, map);
            curr.deleteCharAt(curr.length() - 1);
        }
    }
}