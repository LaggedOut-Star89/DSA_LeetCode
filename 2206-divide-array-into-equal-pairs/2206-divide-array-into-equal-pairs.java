class Solution {
    public boolean divideArray(int[] nums) {
        int cnt=0;
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int num:nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }
        for(int freq:map.keySet()){
            if(map.get(freq)%2!=0){
                return false;
            }
        }
        return true;

    }
}