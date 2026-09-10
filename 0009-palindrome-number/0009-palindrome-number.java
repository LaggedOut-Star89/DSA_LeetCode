class Solution {
    public boolean isPalindrome(int x) {
        int rev = 0;
        if (x < 0) {
            return false;
        }
        int n = x;
        while (x != 0) {
            int rem = x % 10;
            x /= 10;
            /*if(rev<=-2147483648 && rev>=2147483647){
                return false;
            }*/
            rev = rev * 10 + rem;
        }
        return rev == n;
    }
}