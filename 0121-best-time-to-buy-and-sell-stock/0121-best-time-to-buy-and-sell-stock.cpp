class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int resprofit=0;
        for(int i=0;i<prices.size();i++){
            resprofit=max(resprofit,prices[i]-minprice);
            minprice=min(minprice,prices[i]);
        }
        return resprofit;
    }
};