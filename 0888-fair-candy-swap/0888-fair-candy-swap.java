class Solution {
    public int[] fairCandySwap(int[] aliceSizes, int[] bobSizes) {
        int sumA=0;
        int sumB=0;
        for(int a:aliceSizes){
            sumA+=a;
        }
        for(int b:bobSizes){
            sumB+=b;
        }
        int diff=(sumA-sumB)/2;
        HashSet<Integer> set=new HashSet<>();
        for(int b:bobSizes){
            set.add(b);
        }
        for(int a:aliceSizes){
            int b=a-diff;
            if(set.contains(b)){
                return new int[]{a,b};
            }
        }
        return new int[]{};

    }
}