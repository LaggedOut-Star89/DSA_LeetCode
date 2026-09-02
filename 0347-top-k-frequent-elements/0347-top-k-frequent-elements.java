class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        int n=nums.length;
        int [] res= new int[k];
        HashMap<Integer,Integer> 지도=new HashMap<>();
        for(int num:nums){
            지도.put(num,지도.getOrDefault(num,0)+1);
        }
        List<Map.Entry<Integer,Integer>> list=new ArrayList<>(지도.entrySet());
        list.sort((a,b)->a.getValue()-b.getValue());
        int idx=0;
        for(int i=list.size()-1;i>=list.size()-k;i--){
            res[idx++]=list.get(i).getKey();
        }
        return res;
    }
}