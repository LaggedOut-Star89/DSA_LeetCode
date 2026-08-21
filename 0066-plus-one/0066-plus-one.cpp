class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // long long num=0;
        // for(int i=0;i<digits.size();i++){
        //     num=num*10+digits[i];
        // }
        // num+=1;
        // vector<int> v;
        // while(num!=0){
        //     int rm=num%10;
        //     v.push_back(rm);
        //     num/=10;
        // }
        // reverse(v.begin(),v.end());
        // return v;

        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        //case2-> digits=[9,9,9,9,9];
        vector<int>v(digits.size()+1);
        v[0]=1;
        return v;

        
    }
};