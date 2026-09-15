class Solution {
    public int lengthOfLongestSubstring(String s) {
        //using sliding window after seeing keywords
        int max=0;
        int left=0;
        HashSet<Character> set=new HashSet<>();
        for(int right=0;right<s.length();right++){
            char ch=s.charAt(right);
            while(set.contains(ch)){
                set.remove(s.charAt(left));
                left++;
            }
            set.add(ch);
            max=Math.max(max,right-left+1);
        }
        return max;
    }
}