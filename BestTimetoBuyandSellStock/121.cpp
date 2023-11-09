//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Dynamic programming
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxprofit = 0;
        int cheaper = prices[0];

        for(int i=1; i<prices.size(); i++){
            if(prices[i] < cheaper)
                cheaper = prices[i];
            else
                maxprofit = max(maxprofit, prices[i] - cheaper);
        }

        return maxprofit;
    }
};