class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        if(strs.length==0||strs==null){
            return new ArrayList<>();
        }
        HashMap<String,List<String>> map=new HashMap<>();
        //pairs would be sortedkey=arraylist
        for(String s:strs){
            char[] arr=s.toCharArray();
            Arrays.sort(arr);
            String SortedKey=String.valueOf(arr);
            if(!map.containsKey(SortedKey)){
                map.put(SortedKey,new ArrayList<>());
            }
            map.get(SortedKey).add(s);
        }
        return new ArrayList<>(map.values());
    }
}