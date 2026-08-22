class Solution {
public:
    long long sod(int n){
        if(n==0){
            return 0;

        }
        return (n%10)+sod(n/10);
    }
public:
    long long sop(int n){
        if(n==0){
            return 1;
        }
        return (n%10)*sop(n/10);
    }
public:
    bool checkDivisibility(int n) {
        long long sum=sod(n);
        long long prod=sop(n);
        if(n%(sum+prod)==0){
            return true;
        }
        return false;
    }
};