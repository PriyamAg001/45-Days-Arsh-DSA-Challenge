Code:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyPrice = INT_MAX;
        int maxSellProfit = 0;

        for(int i=0; i<n; i++){
            if(buyPrice < prices[i]){
                int profit = prices[i] - buyPrice;
                maxSellProfit = max(profit, maxSellProfit);
            }
            else{
                buyPrice = prices[i];  
            }
        }
        return maxSellProfit;
    }
};

TC: O(n)
SC: O(1)
