class Solution {
    public int findPermutationDifference(String s, String t) {
        int res=0;
        HashMap<Character,Integer> map1=new HashMap<>();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            map1.put(ch,i);
        }
        HashMap<Character,Integer> map2=new HashMap<>();
        for(int i=0;i<t.length();i++){
            char ch=t.charAt(i);
            map2.put(ch,i);
        }
        for(char c:map1.keySet()){
            res+=Math.abs(map1.get(c)-map2.get(c));
        }
        return res;
    }
}