class Solution {
public:
    bool sumGame(string s) {
        int q1 = 0;
        int q2 = 0;
        int fh = 0;
        int sh = 0;

        for(int i = 0; i < s.length()/2; i++) {
            if(s[i] != '?') {
                fh += s[i] - '0';
            }
            else {
                q1++;
            }
        }

        for(int i = s.length()/2; i < s.length(); i++) {
            if(s[i] != '?') {
                sh += s[i] - '0';
            }
            else {
                q2++;
            }
        }
        if((q1 + q2) % 2 == 1)
            return true;

        return 2 * (fh - sh) != 9 * (q2 - q1);
    }
};