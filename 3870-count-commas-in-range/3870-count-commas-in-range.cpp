class Solution {
public:
    int countCommas(int n) {
        string s=to_string(n);
        if(s.length()<4){
            return 0;
        }
        else if(s.length()==4){
            return n-1000+1;
        }
        else if(s.length()==5){
            return 9000+(n-10000+1);
        }
        else if(s.length()==6){
            return 90000+9000+(n-100000+1);
        }
        return 0;
    }
};